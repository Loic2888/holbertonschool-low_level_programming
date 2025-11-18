#include "3-calc.h"
/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 98, 99, or 100 on failure
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && b == 0)
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", operation(a, b));

	return (0);
}
