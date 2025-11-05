#include "main.h"
/**
 * _sqrt_recursion - recursion function to find the square root recursively
 * @n: the number to find the square root of
 * Return: the square root of n, or -1 if n has no natural square root
 */

int _sqrt_recursion(int n)
{
	static int i = 1;
	int res;

	if (n < 0)
	{
		i = 1;
		return (-1);
	}
	else if (i * i == n)
	{
		res = i;
		i = 1;
		return (res);
	}
	else if (i * i > n)
	{
		i = 1;
		return (-1);
	}
	i++;
	return (_sqrt_recursion(n));

	if (res != -1)
	{
		i = 1;
	}

	return (res);
}
