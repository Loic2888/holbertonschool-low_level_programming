#include <stdio.h>
/**
 * main - Entry point of the program
 * @argc: Argument count (not used here)
 * @argv: Argument vector (array of strings)
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
