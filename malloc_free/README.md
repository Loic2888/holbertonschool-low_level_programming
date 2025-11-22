**malloc_free

This folder contains exercises on dynamic memory management in C using malloc and free. These programs are designed to help understand how memory allocation works and how to properly release allocated memory to prevent leaks.

Files included
0-create_array.c: Function that creates an array of chars, initialized with a specific character.

1-strdup.c: Function that returns a pointer to a newly allocated space in memory, which contains a copy of a given string.

2-str_concat.c: Function that concatenates two strings into a newly allocated space in memory.

3-alloc_grid.c: Function that returns a pointer to a 2D array of integers, dynamically allocated.

4-free_grid.c: Function that frees a 2D array previously created by alloc_grid.

main.h: Header file containing function prototypes.

README.md: This file.

Compilation
To compile a file, use the following command:

bash
gcc -Wall -Wextra -Werror -pedantic <filename>.c -o <executable_name>
Example:

bash
gcc 2-str_concat.c -o concat
Learning objectives
Learn how to allocate memory dynamically with malloc.

Understand how to free allocated memory with free.

Manipulate strings and arrays using dynamic memory.

Prevent and handle memory leaks.
