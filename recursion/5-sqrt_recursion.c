#include "main.h"
/**
 * _sqrt_recursion - recursion function to find the square root recursively
 * @n: the number to find the square root of
 * Return: the square root of n, or -1 if n has no natural square root
 */

int _sqrt_recursion(int n)
{
	int guess = 0;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	while (guess * guess < n)
		guess++;
	if (guess * guess == n)
		return (guess);
	else
		return (-1);
}
