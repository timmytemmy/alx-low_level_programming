#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: segment.
 * @accept: accepted characters.
 * Return: Length.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int a;

	while(*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (accept[a] == *s)
			{
				bytes++;
				break;
			}
			else if ((accept[a + 1]) == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
