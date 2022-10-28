#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: integer
 * Return: Always 0.
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('_');
		num = -num;
	}
	if (n == 0)
		_putchar('0');

	if (num / 10)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
