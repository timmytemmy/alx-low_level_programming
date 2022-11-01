#include "main.h"
#include <stdio.h>

/**
 * _memset - function that fills a constant
 * @s: pointer
 * @b: constant
 * @n:unsigned int
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n))
{
	unsigned int a;

	for (a = 0, a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
