#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase
 * Description: Using print_alphabet function
 * Return: Always 0
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}

