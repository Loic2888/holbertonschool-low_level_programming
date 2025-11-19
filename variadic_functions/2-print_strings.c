#include "variadic_functions.h"
/**
 * print_strings - Prints strings separated by a given separator.
 * @separator: The string to be printed between each string.
 * @n: The number of strings passed to the function.
 *
 * Description: This function prints all the strings passed as variadic arg.
 * If a string is NULL, it prints "(nil)" instead. The strings are separated by
 * the string 'separator'. If 'separator' is NULL, no separator is printed.
 * A new line is printed at the end of the output.
 *
 * Return: Nothing (void).
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str = 0;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
