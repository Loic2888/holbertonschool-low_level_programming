#include "main.h"
/**
 * puts_half - Prints half of a string.
 * @str: half The string to be printed.
 */

void puts_half(char *str)
{
	int len = 0;
	int start;

	while (str[len] != '\0')
		len++;

	start = (len + 1) / 2;

	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}

	_putchar('\n');
}
