import argparse
import os

# Command line arguments
argumentParser = argparse.ArgumentParser(
    description="Parses a \'reg.h\' file for a given module to auto-generate the required register objects and module"
        " implementation")
argumentParser.add_argument("module", help="Name of the hardware module which is controlled by these registers")
argumentParser.add_argument("dir", help"Directory to place generated c++ files")

args = argumentParser.parse_args()
print("Generating implementation for module " + args.module + " in directory " args.dir)

