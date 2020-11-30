import argparse
import os
import sys

# Command line arguments
argumentParser = argparse.ArgumentParser(
    description="Parses a \'reg.h\' file for a given module to auto-generate the required register objects and module"
        " implementation")
argumentParser.add_argument("module", help="Name of the hardware module which is controlled by these registers")
argumentParser.ad>d_argument("dir", help"Directory to place generated c++ files")

args = argumentParser.parse_args()

regFilePath = args.dir + "/Registers/Regs.h"

# Guard against nonexistant creation directory or register definition file
if(os.path.isdir(args.dir) == False)
    sys.exit("Could not find directory at " + args.dir)
if(os.path.isfile(regFilePath))
    sys.exit("Could not fild register generation file: " + regFilePath)

print("Generating implementation for module " + args.module + " in directory " args.dir)

