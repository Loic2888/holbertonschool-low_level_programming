**argc_argv
This folder contains exercises on handling command-line arguments in C. The purpose of these programs is to learn how to manipulate argc (argument count) and argv (argument vector), in order to retrieve and use information provided when the program is executed.

Files included
0-whatsmyname.c: Displays the program’s executable name.

1-args.c: Displays the number of arguments passed to the program.

2-args.c: Prints all arguments provided to the program.

3-mul.c: Multiplies two arguments received from the command line.

4-add.c: Adds up all the positive arguments passed to the program.

main.h: Header file containing used prototypes.

README.md: Overview of the folder and its contents.

Compilation
To compile a program, use the following command:

bash
gcc -Wall -Wextra -Werror -pedantic <filename>.c -o <executable_name>
Example:

bash
gcc 1-args.c -o nb_args
Learning objectives
Understand argc and argv in C.

Access command-line arguments.

Manipulate and convert arguments (strings to numbers, etc.).
