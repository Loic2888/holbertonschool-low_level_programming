#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: the number to check
 *
 * Return: 1 if positive, 0 if zero, -1 if negative
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
