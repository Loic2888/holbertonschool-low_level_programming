**function_pointers
This folder contains exercises focusing on function pointers in C. The objective of these programs is to introduce how function pointers work, how to declare, use, and pass them as arguments, and their application for flexible and modular code.

Files included
0-print_name.c: Function that prints a name using a function pointer as a callback.

1-array_iterator.c: Applies a function to each element of an array using a function pointer.

2-int_index.c: Searches for an integer in an array using a function pointer as a comparison.

3-calc.h: Header file for a simple calculator implementation using function pointers.

3-get_op_func.c: Gets the function corresponding to the operator passed as argument.

3-main.c: Main program for the calculator example.

3-op_functions.c: Operator functions for the calculator (add, subtract, multiply, etc.).

function_pointers.h: Header file containing prototypes for the function pointer exercises.

test1.c: Test file for task 3.

README.md: Overview of this folder and its contents.

Compilation
To compile a file, use the following command:

bash
gcc -Wall -Wextra -Werror -pedantic <filename>.c -o <executable_name>
Example:

bash
gcc 0-print_name.c -o print_name
Learning objectives
Understand the syntax and use of function pointers in C.

Pass functions as arguments to other functions.

Use function pointers for flexible operations (such as implementing calculators or iterators).

Build modular code using callbacks.
