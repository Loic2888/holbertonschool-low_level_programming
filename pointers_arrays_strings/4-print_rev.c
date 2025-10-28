#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to the string to print
 */
void print_rev(char *s)
{
	int len = _strlen(s);

	while (len--)
		_putchar(s[len]);
	_putchar('\n');
}
