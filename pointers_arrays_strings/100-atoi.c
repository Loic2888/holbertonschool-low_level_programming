#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 *
 * Return: the integer value of the converted string
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	while (*s && !(*s >= '0' && *s <= '9'))

	{
		if (*s == '-')
		{
			sign = -sign;
			s++;
		}

		else
		{
			s++;
		}
	}

	while (*s >= '0' && *s <= '9')
	{
		num = (num * 10) + (*s - '0');
		s++;
	}

	return (num * sign);
}
