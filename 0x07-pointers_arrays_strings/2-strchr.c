#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: pointer
 * @c: character in a string.
 * Return: 0 if character is not found.
 */

char *_strchr(char *s, char c)
{
	int a;

	for ((a = 0; s[a] != c) && (s[a] != '\0'); a++)
		;
	if (s[a] == c)
		return (s + a);
	else
		return (NULL);
}
