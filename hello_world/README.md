**hello_world

This folder contains the first set of exercises for learning C programming, focusing on compiling, assembling, and basic output. These tasks are a beginner’s introduction to working with scripts, compilation commands, and printing text to the console.

Files included
0-preprocessor: Script that runs a C file through the preprocessor and saves the result.

1-compiler: Script that compiles a C file but does not link.

2-assembler: Script that generates the assembly code of a C file.

3-name: Script that compiles a C file and creates an executable named cisfun.

4-puts.c: C program that prints a specific text using puts.

5-printf.c: C program that prints a specific text using printf.

6-size.c: C program that prints the size of various C types on the computer.

README.md: Overview of the directory and its tasks.

Compilation
To compile a C file from this directory, use:

bash
gcc -Wall -Werror -Wextra -pedantic <filename>.c -o <executable_name>
Example:

bash
gcc 4-puts.c -o puts
Learning objectives
Understand the basics of compiling and assembling C programs.

Learn how to print text using puts and printf.

Get familiar with the different types in C and how to display their sizes.

