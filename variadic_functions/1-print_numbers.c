#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers separated by a string.
 * @separator: The string to print between numbers.
 * @n: The number of integers passed to the function.
 *
 * Description: Prints all the integers passed as variadic arguments,
 * separated by the string 'separator'. If 'separator' is NULL, numbers
 * are printed without any separator. A new line is printed at the end.
 *
 * Return: Nothing (void).
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int s = 0;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, int);
		printf("%d", s);

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
