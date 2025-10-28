#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - prints a string in reverse
 * @str: pointer to the string to print
 */
void print_rev(char *str)
{
	int len = _strlen(str);

	while (len--)
		_putchar(str[len]);
	_putchar('\n');
}
