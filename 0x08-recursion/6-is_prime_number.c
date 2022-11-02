#include "main.h"

/**
 * is_prime_number - prints prime numbers.
 * @n: integer.
 * Return: Always 0.
 */

int is_prime_number(int n)
{
	int o = n / 2;

	if (n <= 1)
	{
		return (0);
	}
	return (is_prime(n, o));
}

/**
 * is_prime - prints prime num.
 * @n: integer.
 * @o: integer
 * Return: Always 0.
 */

int is_prime(int n, int o)
{
	if (o <= 1)
	{
		return (1);
	}
	else if (n % o == 0)
	{
		return (0);
	}
	return (is_prime(n, o - 1));
}
