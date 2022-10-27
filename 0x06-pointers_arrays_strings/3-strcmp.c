#include "main.h"

/**
 * _strcmp - function that compares strings.
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if strings are similar, 1 if otherwise.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, diff = 0;

	while (diff == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		diff = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (diff);
}
