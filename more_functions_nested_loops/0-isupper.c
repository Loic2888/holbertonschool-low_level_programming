#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - check the code.
 *@c: character to be checked
 * Return: 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
