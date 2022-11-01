#include "main.h"

/**
 * _strpbrk = function that searches for any set of bytes.
 * @s: string
 * @accept: bytes.
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (accept[a] == *s)
				return (s);
		}
		s++;
	}
	return (NULL);
}
