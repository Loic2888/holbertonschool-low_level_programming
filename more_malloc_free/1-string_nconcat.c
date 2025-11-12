#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate from s2
 *
 * Return: pointer to the newly allocated space in memory
 *         containing the concatenated string,
 *         or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int t1 = 0, t2 = 0, i;
	char *rts;

	while (s1 && s1[t1])
		t1++;
	while (s2 && s2[t2])
		t2++;
	if (n < t2)
		t2 = n;
	rts = malloc(t1 + t2 + 1);
	if (!rts)
		return (NULL);
	for (i = 0; i < t1; i++)
		rts[i] = s1[i];
	for (i = 0; i < t2; i++)
		rts[t1 + i] = s2[i];
	rts[t1 + t2] = '\0';
	return (rts);
}
