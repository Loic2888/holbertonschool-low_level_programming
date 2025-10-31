#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: the string to be modified
 * Return: a pointer to the modified string
 */
char *string_toupper(char *str)
{
	char *c = str;

	while (*c)
	{
		if (*c <= 'z' && *c >= 'a')
		{
			*c -= 32;
		}
		c++;
	}
	return (str);
}
