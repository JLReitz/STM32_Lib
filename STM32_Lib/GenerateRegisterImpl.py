import argparse
import os
import re
import sys

def CreateAndWriteToFile(filePath, fileContents):
        print("Generating " + filePath)
        header = open(filePath, "w")
        header.write(fileContents)
        header.close()

class RegisterObjectGenerator(object):
    # Public methods
    def RegObjectName(self):
        return self.regObjectNameString

    def AddBitField(self, fieldType, fieldName, fieldSize):
        self.headerFileContents += self.__GenerateHeaderFieldSet(fieldType, fieldName)
        self.sourceFileContents += self.__GenerateSourceFieldSet(fieldType, fieldName, fieldSize)

    def GenerateFiles(self):
        self.headerFileContents += self.__GenerateHeaderEnd()
        self.sourceFileContents += self.__GenerateSourceEnd()

        # Create header file and dump its contents within
        headerFilePath = self.parentDir + "/" + self.regObjectNameString + "Register.hpp"
        CreateAndWriteToFile(headerFilePath, self.headerFileContents)

        # Do the same for the source file
        sourceFilePath = self.parentDir + "/" + self.regObjectNameString + "Register.cpp"
        CreateAndWriteToFile(sourceFilePath, self.sourceFileContents)

    # Private methods
    def __init__(self, regName, namespaces, path):
        # Create substitution modules
        self.fieldNameSubstitute = re.compile(r"({FIELDNAME})")
        self.fieldSizeSubstitute = re.compile(r"({FIELDSIZE})")
        self.fieldTypeSubstitute = re.compile(r"({FIELDTYPE})")
        self.regObjectNameSubstitute = re.compile(r"({REGOBJECTNAME})")
        self.namespaceBlockSubstitute = re.compile(r"({NAMESPACEBLOCK})")
        self.endNamespaceBlockSubstitute = re.compile(r"({ENDNAMESPACEBLOCK})")

        # Set up register object name and namespace encapsulation
        self.regObjectNameString = regName
        self.parentDir = path

        # Add "regs" to the namespace that this module will sit under
        self.namespaceBlockString = ""
        self.endNamespaceBlockString = ""
        for ns in namespaces:
            self.namespaceBlockString += "namespace " + ns + "\n{\n"
            self.endNamespaceBlockString += "}\n"
        self.namespaceBlockString += "namespace regs\n{\n"
        self.endNamespaceBlockString += "}\n"

        # Start header and source file contents by generating the beginning of each
        self.headerFileContents = self.__GenerateHeaderBeginning()
        self.sourceFileContents = self.__GenerateSourceBeginning()

    def __GenerateHeaderBeginning(self):
        substituteString = "#ifndef {CAPREGOBJECTNAME}_HPP_\n" \
                           "#define {CAPREGOBJECTNAME}_HPP_\n\n" \
                           "#include \"../Registers/Registers.h\"\n\n" \
                           "#include <Common/Interfaces/RegisterInterface.hpp>\n\n" \
                           "{NAMESPACEBLOCK}\n" \
                           "class {REGOBJECTNAME}Register : public stm32::intf::RegisterInterface<union {REGOBJECTNAME}_Reg>\n" \
                           "{\n" \
                           "public:\n\n" \
                           "\t{REGOBJECTNAME}Register(union {REGOBJECTNAME}Reg* const regPtr);\n\n"
        
        # Capitalize register object name and substitute into string above
        capRegObjectNameString = self.regObjectNameString.upper()
        capRegObjectSubstitute = re.compile(r"({CAPREGOBJECTNAME})")

        substituteString = capRegObjectSubstitute.sub(capRegObjectNameString, substituteString)
        substituteString = self.regObjectNameSubstitute.sub(self.regObjectNameString, substituteString)
        substituteString = self.namespaceBlockSubstitute.sub(self.namespaceBlockString, substituteString)

        return substituteString

    def __GenerateHeaderEnd(self):
        substituteString = "};\n\n" \
                           "{ENDNAMESPACEBLOCK}\n" \
                           "#endif\n"

        substituteString = self.endNamespaceBlockSubstitute.sub(self.endNamespaceBlockString, substituteString)

        return substituteString

    def __GenerateHeaderFieldSet(self, fieldType, fieldName):
        substituteString = "\t{FIELDTYPE} Get{FIELDNAME}() const;\n" \
                           "\tvoid Set{FIELDNAME}({FIELDTYPE} val);\n\n"

        substituteString = self.fieldNameSubstitute.sub(fieldName, substituteString)
        substituteString = self.fieldTypeSubstitute.sub(fieldType, substituteString)

        return substituteString

    def __GenerateSourceBeginning(self):
        substituteString = "#include \"{REGOBJECTNAME}Register.hpp\"\n\n" \
                           "{NAMESPACEBLOCK}\n" \
                           "using stm32::intf::RegisterInterface;\n\n" \
                           "{REGOBJECTNAME}Register::{REGOBJECTNAME}Register(union {REGOBJECTNAME}Reg* const regPtr)\n" \
                           "\t: RegisterInterface<union {REGOBJECTNAME}_Reg>(regPtr)\n" \
                           "{\n" \
                           "}\n\n"
        
        substituteString = self.regObjectNameSubstitute.sub(self.regObjectNameString, substituteString)
        substituteString = self.namespaceBlockSubstitute.sub(self.namespaceBlockString, substituteString)

        return substituteString

    def __GenerateSourceEnd(self):
        substituteString = "{ENDNAMESPACEBLOCK}"

        substituteString = self.endNamespaceBlockSubstitute.sub(self.endNamespaceBlockString, substituteString)

        return substituteString

    def __GenerateSourceFieldSet(self, fieldType, fieldName, fieldSize):
        substituteString = "{FIELDTYPE} {REGOBJECTNAME}Register::Get{FIELDNAME}() const\n" \
                           "{\n" \
                           "\treturn Reg()->bits.{FIELDNAME}; \n" \
                           "}\n\n" \
                           "void {REGOBJECTNAME}Register::Set{FIELDNAME}({FIELDTYPE} val)\n" \
                           "{\n" \
                           "\tReg()->bits.{FIELDNAME} = val; \n" \
                           "}\n\n"
        
        substituteString = self.fieldNameSubstitute.sub(fieldName, substituteString)
        substituteString = self.fieldSizeSubstitute.sub(fieldSize, substituteString) # Not currently used, as seen in the string above. We may want this for later
        substituteString = self.fieldTypeSubstitute.sub(fieldType, substituteString)
        substituteString = self.regObjectNameSubstitute.sub(self.regObjectNameString, substituteString)

        return substituteString

class ModuleObjectGenerator(object):
    # Public methods
    def AddRegisterObject(self, registerObjectGenerator):
        self.registerObjectGenerators.append(registerObjectGenerator)

    def GenerateModuleAndRegisterFiles(self, includeDir, sourceDir):
        # Generate register objects first
        for reg in self.registerObjectGenerators:
            reg.GenerateFiles()

        # Now generate this module
        headerFilePath = includeDir + "/" + self.moduleNameString + "Impl.hpp"
        headerFileContents = self.__GenerateHeaderContents()
        CreateAndWriteToFile(headerFilePath, headerFileContents)

        sourceFilePath = sourceDir + "/" + self.moduleNameString + "Impl.cpp"
        sourceFileContents = self.__GenerateSourceContents()
        CreateAndWriteToFile(sourceFilePath, sourceFileContents)

    # Private methods
    def __init__(self, moduleName, namespaces):
        # Create substitution modules
        self.moduleNameSubstitute = re.compile(r"({MODULENAME})")
        self.regNamespaceSubstitute = re.compile(r"({REGSNAMESPACE})")
        self.namespaceSubstitute = re.compile(r"({NAMESPACE})")
        self.namespaceBlockSubstitute = re.compile(r"({NAMESPACEBLOCK})")
        self.endNamespaceBlockSubstitute = re.compile(r"({ENDNAMESPACEBLOCK})")

        self.moduleNameString = moduleName
        self.registerObjectGenerators = []

        # Generate the namespace extension for this module's registers
        self.regNamespaceString = ""
        for ns in namespaces:
            self.regNamespaceString += ns + "::"
        self.regNamespaceString += "regs"

        # Add "impl" to the namespace that this module will sit under
        self.namespaceString = ""
        self.namespaceBlockString = ""
        self.endNamespaceBlockString = ""
        for ns in namespaces:
            self.namespaceString += ns + "::"
            self.namespaceBlockString += "namespace " + ns + "\n{\n"
            self.endNamespaceBlockString += "}\n"
        self.namespaceString += "impl"
        self.namespaceBlockString += "namespace impl\n{\n"
        self.endNamespaceBlockString += "}\n"

    def __GenerateHeaderContents(self):
        substituteString = "#ifndef {CAPMODULENAME}IMPL_HPP_\n" \
                           "#define {CAPMODULENAME}IMPL_HPP_\n\n"
        
        # Include register object headers
        for reg in self.registerObjectGenerators:
            substituteString += "#include \"../Registers/" + reg.RegObjectName() + "Register.hpp\"\n\n"


        # TODO add header description

        substituteString += "{NAMESPACEBLOCK}\n" \
                            "/* ================================================================================================\n" \
                            " *  {NAMESPACE}::{MODULENAME}Impl\n" \
                            " * ================================================================================================\n" \
                            " *\n" \
                            " * <Enter module description here>\n" \
                            " */\n\n" \
                            "class {MODULENAME}Impl\n" \
                            "{\n" \
                            "public:\n\n" \
                            "\t{MODULENAME}Impl(struct {MODULENAME}RegisterBank* const regs);\n\n" \
                            "protected:\n\n" \
                            "private:\n\n"
        
        for reg in self.registerObjectGenerators:
            substituteString += "\t{REGSNAMESPACE}::" + reg.RegObjectName() + "Register m" + reg.RegObjectName() + "Reg;\n"

        substituteString += "};\n\n" \
                            "{ENDNAMESPACEBLOCK}\n" \
                            "#endif\n"

        # Capitalize register object name and substitute into string above
        capModuleNameString = self.moduleNameString.upper()
        capModuleNameSubstitute = re.compile(r"({CAPMODULENAME})")

        substituteString = capModuleNameSubstitute.sub(capModuleNameString, substituteString)
        substituteString = self.moduleNameSubstitute.sub(self.moduleNameString, substituteString)
        substituteString = self.namespaceSubstitute.sub(self.namespaceString, substituteString)
        substituteString = self.regNamespaceSubstitute.sub(self.regNamespaceString, substituteString)
        substituteString = self.namespaceBlockSubstitute.sub(self.namespaceBlockString, substituteString)
        substituteString = self.endNamespaceBlockSubstitute.sub(self.endNamespaceBlockString, substituteString)

        return substituteString

    def __GenerateSourceContents(self):
        substituteString = "#include \"../Include/{MODULENAME}Impl.hpp\"\n\n" \
                           "{NAMESPACEBLOCK}\n" \
                           "/* ================================================================================================\n" \
                           " *  {NAMESPACE}::{MODULENAME}Impl\n" \
                           " *  ---------------------------------------------\n" \
                           " *  Methods\n" \
                           " * ================================================================================================\n" \
                           " */\n\n" \
                           "// Public /////////////////////////////////////////////////////////////////\n\n" \
                           "{MODULENAME}Impl::{MODULENAME}Impl(struct {MODULENAME}RegisterBank* const regs)\n" \
                           ":\t"

        # Generate initializer list for member register objects
        registerInitializerList = ""
        for i in range(len(self.registerObjectGenerators)):
            # Generate list addition string
            regObjectName = self.registerObjectGenerators[i].RegObjectName()
            if(i < len(self.registerObjectGenerators) - 1):
                listAddition = " m" + regObjectName + "Reg(&regs->" + regObjectName + "),"
            else:
                listAddition = " m" + regObjectName + "Reg(&regs->" + regObjectName + ")" # Don't include ',' in the final element

            # If the current line plus the new addition will extend past 120 columns, add it to the substitute string 
            # and start a new one
            if(len(registerInitializerList + listAddition) >= 120):
                substituteString += registerInitializerList + "\n"
                registerInitializerList = "\t"
            
            # Add new addition to the current line
            registerInitializerList += listAddition
        substituteString += registerInitializerList + "\n" # Add end of initializer list to subtitute string

        # Finish out source file contents
        substituteString += "{\n" \
                            "}\n\n" \
                            "// Protected //////////////////////////////////////////////////////////////\n\n" \
                            "// Private ////////////////////////////////////////////////////////////////\n\n" \
                            "{ENDNAMESPACEBLOCK}"

        substituteString = self.moduleNameSubstitute.sub(self.moduleNameString, substituteString)
        substituteString = self.namespaceSubstitute.sub(self.namespaceString, substituteString)
        substituteString = self.namespaceBlockSubstitute.sub(self.namespaceBlockString, substituteString)
        substituteString = self.endNamespaceBlockSubstitute.sub(self.endNamespaceBlockString, substituteString)
    
        return substituteString

# ----------------------------------------  Begin  ------------------------------------------------

# Command line arguments
argumentParser = argparse.ArgumentParser(
    description="Parses a \'reg.h\' file for a given module to auto-generate the required register objects and module"
        " implementation")
argumentParser.add_argument("dir", help="Parent directory of the generated files")
argumentParser.add_argument("module", help="Name of the hardware module which is controlled by these registers in " \
                            "camel-case format (e.g. SystemControl, BasicTimer, or GpioPort")
argumentParser.add_argument('namespaces', nargs='+', help="List of namespaces, top to bottom, which this module will sit within")

args = argumentParser.parse_args()

namespaceMatcher = re.compile(r"namespace (\w+)")
registerMatcher = re.compile(r"union (\w+)Reg\n{(.*)};", re.MULTILINE | re.DOTALL)
registerBankMatcher = re.compile(r"struct (\w+)RegisterBank\n{(.*)};", re.MULTILINE | re.DOTALL)
registerFieldMatcher = re.compile(r"(\w+) (\w+)\s*:\s*(\d+);")

# Guard against nonexistant creation directory or register definition file
if(os.path.isdir(args.dir) == False):
    sys.exit("Could not find parent directory at " + args.dir)

targetDirectoryExists = False
targetDirectoryName = ""
directoryContents = os.listdir(args.dir)
for item in directoryContents:
    if(os.path.isdir(args.dir + "/" + item)):
        if(item.lower() == args.module.lower()):
            targetDirectoryExists = True
            targetDirectoryName = item
if(targetDirectoryExists == False):
    sys.exit("Could not find module's target directory within " + args.dir)

regFileDir = args.dir + "/" + targetDirectoryName + "/Registers"
regFilePath = regFileDir + "/Registers.h"
if(os.path.isfile(regFilePath) == False):
    sys.exit("Could not find register generation file: " + regFilePath)

# Path compilation
includeDir = args.dir + "/" + targetDirectoryName + "/Include"
srcDir = args.dir + "/" + targetDirectoryName + "/Src"

# Open register definition file and read in to string before closing
regsFile = open(regFilePath)
regString = regsFile.read()
regsFile.close()

print("Reading register definitions...")

# Look first for register bank definition at the end of the file
# If it is not there, terminate process
regBankMatch = registerBankMatcher.search(regString)
if(regBankMatch == None):
    errorString = "Could not find register bank definition within " + regFilePath + "\n" \
                  "Please be sure to include this in the form:\n\n" \
                  "\tstruct <module name>RegisterBank\n" \
                  "\t{\n\t\t<registers in memory-accurate layout>\n\t};\n"
    sys.exit(errorString)
if(regBankMatch.group(1) != args.module):
    sys.exit("Register bank structure: " + regBankMatch.group(1) + " does not match the module name that is given: " + \
             args.module + ". Please change it accordingly.")

# Begin generation
print("Generating implementation for module " + args.module + " in directory " + args.dir)
print("Using namespaces:")
for ns in args.namespaces:
    print("\t" + ns)
print("") # Print extra newline for console readability

moduleGenerator = ModuleObjectGenerator(args.module, args.namespaces)

registers = registerMatcher.finditer(regString) # Find all iterations of a register struct within the definition file
for reg in registers:
    regName = reg.group(1)
    print("Found register: " + regName + "\n\tFields:")

    registerGenerator = RegisterObjectGenerator(regName, args.namespaces, regFileDir) # Create new register object generator

    fields = registerFieldMatcher.finditer(reg.group(2)) # Find all iterations of bitfields within the register struct
    for field in fields:
        fieldType = field.group(1)
        fieldName = field.group(2)
        fieldSize = field.group(3)

        # If the bitfield is not reserved, add it to the generator
        if(re.search(r"rsvd", fieldName) == None):
            print("\t- " + fieldName + " (" + fieldType + " : " + fieldSize + " bits)")
            registerGenerator.AddBitField(fieldType, fieldName, fieldSize)
    
    moduleGenerator.AddRegisterObject(registerGenerator) # Add generator to module

print("") # Print extra newline for console readability

# Generate module implementation
moduleGenerator.GenerateModuleAndRegisterFiles(includeDir, srcDir)