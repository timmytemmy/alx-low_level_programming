#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @c: string to encode
 * Return: Always 0.
 */
char *rot13(char *c)
{
	int len, rotate;
	char x[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char y[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (len = 0; c[len] != '\0'; len++)
	{
		for (rotate = 0; rotate < 52; rotate++)
		{
			if (x[rotate] == c[len])
			{
				c[len] = y[rotate];
				break;
			}
		}
	}
	return (c);
}
