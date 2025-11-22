**more_malloc_free

This folder contains additional exercises on advanced dynamic memory allocation in C, focusing on the use of malloc, calloc, and memory management for arrays and strings.

Files included
0-malloc_checked.c: Function that allocates memory using malloc and checks for allocation failure.

1-string_nconcat.c: Function that concatenates two strings with a specified maximum character count from the second string.

2-calloc.c: Function that allocates memory for an array and initializes it to zero, mimicking the behavior of calloc.

3-array_range.c: Function that creates an array of integers containing a range from min to max.

main.h: Header file containing function prototypes.

README.md: This file.

Compilation
To compile a file, use the following command:

bash
gcc -Wall -Wextra -Werror -pedantic <filename>.c -o <executable_name>
Example:

bash
gcc 2-calloc.c -o calloc_test
Learning objectives
Deepen understanding of dynamic memory allocation in C.

Safely handle memory allocation failures.

Work with memory for arrays of basic data types and strings.

Use calloc and manage zero-initialization of allocated arrays.
