#include "main.h"
/**
 * _is_prime - Helper function that checks if a number is prime recursively
 * @n: The number to check
 * @d: The current divisor being tested
 * Return: 1 if n is a prime number, 0 otherwise
 */
int _is_prime(int n, int d)
{
	if (d * d > n)
	{
		return (1);
	}
	if (n % d == 0)
	{
		return (0);
	}
	return (_is_prime(n, d + 1));
}
/**
 * is_prime_number - Determines if an integer is a prime number
 * @n: The number to check
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_is_prime(n, 2));
}
