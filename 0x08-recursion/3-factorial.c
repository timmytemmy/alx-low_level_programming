#include "main.h"

/**
 * factorial - functin returns the factorial of a given number.
 * n: integer
 * Return: Always 0.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
