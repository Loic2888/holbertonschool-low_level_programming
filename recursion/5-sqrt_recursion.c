#include "main.h"
/**
 * _sqrt_recursion - recursion function to find the square root recursively
 * @n: the number to find the square root of
 * Return: the square root of n, or -1 if n has no natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		int i = 1;

		while (i * i <= n)
		{
			i++;
		}
		if ((i - 1) * (i - 1) == n)
		{
			return (i - 1);
		}
	}
	return (-1);
}
