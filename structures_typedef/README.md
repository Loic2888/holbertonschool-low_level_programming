**structures_typedef

This folder contains exercises on using C structures and the typedef keyword. The assignments introduce how to define and manipulate custom data types (structs) and create aliases with typedef for cleaner code.

Files included
1-init_dog.c: Function that initializes a variable of type struct dog.

2-print_dog.c: Function that prints the details of a struct dog.

4-new_dog.c: Function that creates a new dog (allocates memory for a new struct dog).

5-free_dog.c: Function that frees the memory allocated for a struct dog.

dog.h: Header file containing the definition of struct dog and related prototypes.

main.h: Header file with prototypes.

README.md: This file.

Compilation
To compile a file, use:

bash
gcc -Wall -Wextra -Werror -pedantic <filename>.c -o <executable_name>
Example:

bash
gcc 1-init_dog.c -o init_dog
Learning objectives
Learn to define and use structures (struct) in C.

Understand how and why to use typedef for type aliases.

Practice dynamic memory allocation within structures.

Modularize code with proper use of header files and custom types.
