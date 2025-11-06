#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 * @argc: Argument count (not used here)
 * @argv: Argument vector (array of strings)
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int a, b, tada;

		a = atoi(argv[1][0] == '-' ? argv[1] + 1 : argv[1]);
		if (argv[1][0] == '-')
			a = -a;
		b = atoi(argv[2][0] == '-' ? argv[2] + 1 : argv[2]);
		if (argv[2][0] == '-')
			b = -b;
		tada = a * b;
		printf("%d\n", tada);
		return (0);
	}
}
