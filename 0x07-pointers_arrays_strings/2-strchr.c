#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: pointer
 * @c: character in a string.
 * Return: 0 if character is not found.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0):
}
