#include "main.h"

/**
 * puts2 - prints first character of a string
 * @str: string
 * Return: Always 0
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			putchar(str[i]);
		i++;
	}
	putchar('\n');
}
