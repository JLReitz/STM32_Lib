import argparse
import os
import re
import sys

class RegisterObjectGenerator(object):
    # Public methods

    def AddBitField(self, fieldType, fieldName, fieldSize):
        self.headerFileContents += self.__GenerateHeaderFieldSet(fieldType, fieldName)
        self.sourceFileContents += self.__GenerateSourceFieldSet(fieldType, fieldName, fieldSize)

    def GenerateSourceFiles(self, includeDir, sourceDir):
        self.headerFileContents += self.__GenerateHeaderEnd()
        self.sourceFileContents += self.__GenerateSourceEnd()

        # Create header file and dump its contents within
        if(os.path.isdir(includeDir) == False):
            os.mkdir(includeDir)
        headerFilePath = includeDir + "/" + self.regObjectNameString + "Reg.hpp"
        self.__CreateAndWriteToFile(headerFilePath, self.headerFileContents)

        # Do the same for the source file
        if(os.path.isdir(sourceDir) == False):
            os.mkdir(sourceDir)
        sourceFilePath = sourceDir + "/" + self.regObjectNameString + "Reg.cpp"
        self.__CreateAndWriteToFile(sourceFilePath, self.sourceFileContents)

    # Private methods
    def __init__(self, regObjectName, namespaces):
        # Create substitution modules
        self.fieldNameSubstitute = re.compile(r"({FIELDNAME})")
        self.fieldSizeSubstitute = re.compile(r"({FIELDSIZE})")
        self.fieldTypeSubstitute = re.compile(r"({FIELDTYPE})")
        self.regObjectNameSubstitute = re.compile(r"({REGOBJECTNAME})")
        self.namespaceBlockSubstitute = re.compile(r"({NAMESPACEBLOCK})")
        self.endNamespaceBlockSubstitute = re.compile(r"({ENDNAMESPACEBLOCK})")

        # Set up register object name and namespace encapsulation
        self.regObjectNameString = regObjectName

        self.namespaceBlockString = ""
        self.endNamespaceBlockString = ""
        for ns in namespaces:
            self.namespaceBlockString += "namespace " + ns + "\n{\n"
            self.endNamespaceBlockString += "}\n"

        # Start header and source file contents by generating the beginning of each
        self.headerFileContents = self.__GenerateHeaderBeginning()
        self.sourceFileContents = self.__GenerateSourceBeginning()

    def __CreateAndWriteToFile(self, filePath, fileContents):
        print("Generating " + filePath)
        header = open(filePath, "w")
        header.write(fileContents)
        header.close()

    def __GenerateHeaderBeginning(self):
        substituteString = "#ifndef {CAPREGOBJECTNAME}_HPP_\n" \
                           "#define {CAPREGOBJECTNAME}_HPP_\n\n" \
                           "#include \"../Registers/Registers.h\"\n\n" \
                           "#include <Common/Interfaces/RegisterInterface.hpp>\n\n" \
                           "{NAMESPACEBLOCK}\n" \
                           "class {REGOBJECTNAME}Reg : public stm32::intf::RegisterInterface<union {REGOBJECTNAME}_Reg>\n" \
                           "{\n" \
                           "public:\n\n" \
                           "\t{REGOBJECTNAME}Reg(union {REGOBJECTNAME}_Reg* const regPtr);\n\n"
        
        # Capitalize register object name and substitute into string above
        capRegObjectName = self.regObjectNameString.upper()
        capRegObjectSubstitute = re.compile(r"({CAPREGOBJECTNAME})")

        substituteString = capRegObjectSubstitute.sub(capRegObjectName, substituteString)
        substituteString = self.regObjectNameSubstitute.sub(self.regObjectNameString, substituteString)
        substituteString = self.namespaceBlockSubstitute.sub(self.namespaceBlockString, substituteString)

        return substituteString

    def __GenerateHeaderEnd(self):
        substituteString = "};\n\n" \
                           "{ENDNAMESPACEBLOCK}\n" \
                           "#endif\n\n"

        substituteString = self.endNamespaceBlockSubstitute.sub(self.endNamespaceBlockString, substituteString)

        return substituteString

    def __GenerateHeaderFieldSet(self, fieldType, fieldName):
        substituteString = "\t{FIELDTYPE} Get{FIELDNAME}() const;\n" \
                           "\tvoid Set{FIELDNAME}({FIELDTYPE} val);\n\n"

        substituteString = self.fieldNameSubstitute.sub(fieldName, substituteString)
        substituteString = self.fieldTypeSubstitute.sub(fieldType, substituteString)

        return substituteString

    def __GenerateSourceBeginning(self):
        substituteString = "#include \"../Include/{REGOBJECTNAME}Reg.hpp\"\n\n" \
                           "{NAMESPACEBLOCK}\n" \
                           "using stm32::intf::RegisterInterface;\n\n" \
                           "{REGOBJECTNAME}Reg::{REGOBJECTNAME}Reg(union {REGOBJECTNAME}_Reg* const regPtr)\n" \
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
        substituteString = "{FIELDTYPE} {REGOBJECTNAME}Reg::Get{FIELDNAME}() const\n" \
                           "{\n" \
                           "\treturn Reg()->bits.{FIELDNAME}; \n" \
                           "}\n\n" \
                           "void {REGOBJECTNAME}Reg::Set{FIELDNAME}({FIELDTYPE} val)\n" \
                           "{\n" \
                           "\tReg()->bits.{FIELDNAME} = val; \n" \
                           "}\n\n"
        
        substituteString = self.fieldNameSubstitute.sub(fieldName, substituteString)
        substituteString = self.fieldSizeSubstitute.sub(fieldSize, substituteString) # Not currently used, as seen in the string above. We may want this for later
        substituteString = self.fieldTypeSubstitute.sub(fieldType, substituteString)
        substituteString = self.regObjectNameSubstitute.sub(self.regObjectNameString, substituteString)

        return substituteString

# ----------------------------------------  Begin  ------------------------------------------------

# Command line arguments
argumentParser = argparse.ArgumentParser(
    description="Parses a \'reg.h\' file for a given module to auto-generate the required register objects and module"
        " implementation")
argumentParser.add_argument("module", help="Name of the hardware module which is controlled by these registers")
argumentParser.add_argument("dir", help="Directory to place generated c++ files")

args = argumentParser.parse_args()

namespaceMatcher = re.compile(r"namespace (\w+)")
registerMatcher = re.compile(r"union (\w+)_Reg\n{(.*)};", re.MULTILINE | re.DOTALL)
registerFieldMatcher = re.compile(r"(\w+) (\w+)\s*:\s*(\d+);")

# Path compilation
regFilePath = args.dir + "/Registers/Registers.h"
includeDir = args.dir + "/Include"
srcDir = args.dir + "/Src"

namespaces = ["stm32", "sysctrl", "rcc", "regs"]

# Guard against nonexistant creation directory or register definition file
if(os.path.isdir(args.dir) == False):
    sys.exit("Could not find directory at " + args.dir)
if(os.path.isfile(regFilePath) == False):
    sys.exit("Could not find register generation file: " + regFilePath)

print("Generating implementation for module " + args.module + " in directory " + args.dir)

# Open register definition file and read in to string before closing
regsFile = open(regFilePath)
regString = regsFile.read()
regsFile.close()

print("Reading register definitions...")
registers = registerMatcher.finditer(regString)
for reg in registers:
    regName = reg.group(1)
    print("Found register: " + regName + "\n\tFields:")

    regObjectGenerator = RegisterObjectGenerator(regName, namespaces)

    fields = registerFieldMatcher.finditer(reg.group(2))
    for field in fields:
        fieldType = field.group(1)
        fieldName = field.group(2)
        fieldSize = field.group(3)

        if(re.search(r"rsvd", fieldName) == None):
            print("\t- " + fieldName + " (" + fieldType + " : " + fieldSize + " bits)")
            regObjectGenerator.AddBitField(fieldType, fieldName, fieldSize)
    
    regObjectGenerator.GenerateSourceFiles(includeDir, srcDir)

# Read all namespaces
#print("Namespaces:")
#namespaces = namespaceMatcher.finditer(regString)
#for ns in namespaces:
    #print(ns.group(1))
    
