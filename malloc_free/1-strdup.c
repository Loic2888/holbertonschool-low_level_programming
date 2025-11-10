#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
	int i, len;
	char *rts;

	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	rts = malloc((len + 1) * sizeof(char));

	if (rts == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		rts[i] = str[i];
	}
	rts[len] = '\0';
	return (rts);
}
