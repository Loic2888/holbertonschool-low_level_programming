**variadic_functions

This folder contains exercises on variadic functions in C, which are functions that accept a variable number of arguments. These tasks focus on using macros from stdarg.h and implementing functions that process a flexible number of inputs.

Files included
0-sum_them_all.c: Function that returns the sum of all its integer parameters (variadic).

1-print_numbers.c: Function that prints numbers, separated by a string, using variadic arguments.

2-print_strings.c: Function that prints strings, separated by a given separator, using variadic arguments.

3-print_all.c: Function that prints anything, based on a format string, using a function-pointer table and variadic arguments.

variadic_functions.h: Header file with function prototypes and macros.

test2.c: Test file for practicing or verifying implementations.

README.md: This file.

Compilation
To compile a file, use:

bash
gcc -Wall -Wextra -Werror -pedantic <filename>.c -o <executable_name>
Example:

bash
gcc 0-sum_them_all.c -o sum
Learning objectives
Understand how to use va_list, va_start, va_arg, and va_end from stdarg.h.

Write functions that accept a variable number of arguments.

Build flexible APIs and utility functions in C.

Enhance modularity by using function pointers with variadic arguments.
