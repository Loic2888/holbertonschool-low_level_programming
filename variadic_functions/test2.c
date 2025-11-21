#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
typedef void (*op_func)(va_list, char *);

void print_char(va_list args, char *sep)
{
	printf("%s%c", sep, va_arg(args, int));
}
void print_int(va_list args, char *sep)
{
	printf("%s%d", sep, va_arg(args, int));
}
void print_float(va_list args, char *sep)
{
	printf("%s%.1f", sep, va_arg(args, double));
}
void print_string(va_list args, char *sep)
{
	char *str = va_arg(args, char *);

	if (!str)
		str = "(nil)";
	printf("%s%s", sep, str);
}
typedef struct
{
	char c;
	op_func op_function;
} caracter;

caracter caract[] = {
	{'c', print_char},
	{'i', print_int},
	{'f', print_float},
	{'s', print_string},
};
op_func get_op_func(char c)
{
	int i = 0;
	int n = sizeof(caract) / sizeof(caracter);

	while (i < n)
	{
		if (caract[i].c == c)
			return (caract[i].op_function);
		i++;
	}
	return (NULL);
}
void print_all(const char *const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *sep = "";

	va_start(args, format);
	while (format && format[i])
	{
		op_func f = get_op_func(format[i]);

		if (f)
		{
			f(args, sep);
			sep = ", ";
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
