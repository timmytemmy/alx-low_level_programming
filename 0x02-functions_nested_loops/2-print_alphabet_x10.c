#include "main.h"

/**
 * print_alphabet_x10 - to print lowercase 10 times.
 * Description: function to print lowercase 10 times.
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char a, i;

	for (i = 0; i <= 9; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
