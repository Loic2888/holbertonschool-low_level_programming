#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to be modified
 * Return: a pointer to the modified string
 */
char *cap_string(char *str)
{
	char *ptr = str;
	char sep[14] = " \t\n,;.!?\"(){}";
	int i;
	int mark = 0;

	if (*ptr >= 'a' && *ptr <= 'z')
		*ptr = *ptr - 32;

	while (*ptr)
	{
		for (i = 0; i <= 12; i++)
		{
			if (*ptr == sep[i])
				mark = 1;
		}
		ptr++;

		if (*ptr >= 'a' && *ptr <= 'z' && mark == 1)
			*ptr = *ptr - 32;
		mark = 0;
	}

	return (str);
}
