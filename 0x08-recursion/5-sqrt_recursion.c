#include "main.h"

/**
 * _sqrt_recursion - returns the square root of a number.
 * @n: integer.
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));
}

/**
 * _sqrt - returns the square root of a number.
 * @n: integer 1.
 * @o: integer 2.
 * Return: Always 0.
 */

int _sqrt(int n, int o)
{
	if (n < 0)
	{
		return (-1);
	}
	if ((o * o) > n)
	{
		return (-1);
	}
	if (o * o == n)
	{
		return (o);
	}
	return (_sqrt(n, o + 1));
}
