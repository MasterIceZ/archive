#!/usr/bin/env python

# Written in Python by Hydrolyzed~
# Please use this on Mac with Homebrew installed

import sys
import os

def showError(txt):
    print(txt)
    print("Program Exited!")
    exit()

if len(sys.argv) < 2:
    showError("Missing C++ file")

cpp_sources = list()
input_files = list()

if os.path.exists(f"./input.txt"):
    input_files.append("input.txt")
for f in sys.argv:
    file_extension = f.split(".")[-1]
    if file_extension == 'c' or file_extension == 'cpp' or file_extension == 'cc':
        cpp_sources.append(f)
    if (file_extension == 'in' or file_extension == 'txt') and f != "input.txt":
        input_files.append(f)

if len(cpp_sources) == 0:
    showError("Missing C++ file")

cpp_sources_str = " ".join(cpp_sources)

# Compile C++ source
compile_result = os.system(f"g++-13 -std=gnu++2a -Wall -O2 {cpp_sources_str} -o runner.out")
if compile_result != 0:
    showError("** Compile Error! **")

# Call Program
for test_index, testcase in enumerate(input_files):
    print(f"Running #{test_index}: {testcase}")
    os.system(f"./runner.out < {testcase}")
    print("================================")

# Run after use testcases
if "-r" in sys.argv:
    print("Running Custom Case")
    os.system("./runner.out")
    print("================================")

print("Removing Executable file")
os.system("rm runner.out")
