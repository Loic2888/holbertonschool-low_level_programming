#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_arg - prints a single argument based on its type
 * @type: type of the argument ('c', 'i', 'f', 's')
 * @args: list of variadic arguments
 * @sep: separator to print before the argument
 *
 * Description: This function handles printing of one argument depending
 * on its type. It supports characters, integers, floats and strings.
 * For strings, if the value is NULL, it prints "(nil)".
 */

void print_arg(char type, va_list args, char *sep)
{
	char *str;

	switch (type)
	{
	case 'c':
		printf("%s%c", sep, va_arg(args, int));
		break;

	case 'i':
		printf("%s%d", sep, va_arg(args, int));
		break;

	case 'f':
		printf("%s%f", sep, va_arg(args, double));
		break;

	case 's':
		str = va_arg(args, char *);
		switch (!str)
		{
		case 1:
			printf("%s(nil)", sep);
			break;
		default:
			printf("%s%s", sep, str);
			break;
		}
		break;

	default:
		break;
	}
}

/**
 * print_all - prints anything depending on format
 * @format: list of types of arguments passed
 */
void print_all(const char *const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *sep = "";

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
		case 'i':
		case 'f':
		case 's':
			print_arg(format[i], args, sep);
			sep = ", ";
			break;
		default:
			break;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
