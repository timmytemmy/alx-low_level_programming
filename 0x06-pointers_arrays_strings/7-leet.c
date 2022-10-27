#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @c: string
 * Return: Always 0 .
 */

char *leet(char *c)
{
	int len = 0, i;
	int low_letters[] = {97, 101, 111, 116, 108};
	int up_letters[] = {65, 69, 79, 84, 76};
	int value[] = {54, 51, 48, 55, 49};

	while (*(c + len) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(c + len) == low_letters[i] || *(c + len) == up_letters[i])
			{
				*(c + len) = value[i];
				break;
			}
		}
		len++;
	}
	return (c);
}
