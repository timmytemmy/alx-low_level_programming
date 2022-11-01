#include "main.h"
#include <stdio.h>

/**
 * _memset - function that fills a constant
 * @s: pointer
 * @b: constant
 * @n:unsigned int
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
