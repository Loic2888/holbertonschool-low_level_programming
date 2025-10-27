#include "main.h"
#include <ctype.h>
/**
 * _isdigit - checks for digit character.
 * @c: character to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
