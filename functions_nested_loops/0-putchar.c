#include "main.h"

/**
 * main - affiche "_putchar" suivi d'un saut de ligne
 *
 * Return: 0
 */
int main(void)
{
	char *s = "_putchar\n";
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (0);
}
