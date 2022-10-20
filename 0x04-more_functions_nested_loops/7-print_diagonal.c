#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: parameter
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int j = 0, k;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (k = 0; k < j; k++)
				_putchar(' ');
		_putchar(92);
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
