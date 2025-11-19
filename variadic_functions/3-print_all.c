#include "variadic_functions.h"
/**
 * print_all - Prints arguments of various types
 * @format: A list of types of arguments passed to the function
 */
void print_all(const char *const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	char *sep = "";

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", sep, va_arg(args, int));
			sep = ", ";
			break;
		case 'i':
			printf("%s%d", sep, va_arg(args, int));
			sep = ", ";
			break;
		case 'f':
			printf("%s%f", sep, va_arg(args, double));
			sep = ", ";
			break;
		case 's':
			str = va_arg(args, char *);
			if (!str)
				printf("%s(nil)", sep);
			else
				printf("%s%s", sep, str);
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
