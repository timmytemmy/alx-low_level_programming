#include <stdio.h>

/**
 * main - print if the number is positive, zero or negative
 * Description: using the main function
 * Return: Always zero (Success)
 */
int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
