#include "main.h"
/**
 * leet - encodes a string into 1337 (leet) speak
 * @str: input string
 *
 * Return: pointer to the modified string
 */
char *leet(char *str)
{
	char *rts = str;
	char LETTRE[] = "aAeEoOtTlL";
	char WITCH[] = "4433007711";
	int i;

	while (*rts)
	{
		for (i = 0; LETTRE[i]; i++)
		{
			if (*rts == LETTRE[i])
			{
				*rts = WITCH[i];
				break;
			}
		}
		rts++;
	}
	return (str);
}
