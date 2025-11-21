#include <stdio.h>
#include <stdlib.h>

typedef int (*op_func)(int, int);

int add(int a, int b)
{
	return (a + a);
}
int sub(int a, int b)
{
	return (a - b);
}
int mul(int a, int b)
{
	return (a * b);
}
int divide(int a, int b)
{
	return (a / b);
}
int mod(int a, int b)
{
	return (a % b);
}
typedef struct
{
	char op_char;
	op_func op_function;
} op_entry;

op_entry ops[] = {
	{'+', add},
	{'-', sub},
	{'*', mul},
	{'/', divide},
	{'%', mod},
};
op_func get_op_func(char op)
{
	int n = sizeof(ops) / sizeof(op_entry);

	for (int i = 0;
		 i < n; i++)
	{
		if (ops[i].op_char == op)
			return (ops[i].op_function);
	}
	return (NULL);
}

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	int n1 = atoi(argv[1]);
	char *op = argv[2];
	int n2 = atoi(argv[3]);
	op_func func = get_op_func(op[0]);

	if (!func || op[1] != '\0')
	{
		printf("Error\n");
		return (99);
	}
	if ((op == '/' || op == '%') && n2 == 0)
	{
		printf("Error\n");
		return (100);
	}
}
