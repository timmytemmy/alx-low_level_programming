#include "main.h"

/**
 * string_toupper - function changes lowercase in a string to upper.
 * @s: input string.
 * Return: Always 0.
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
		i++
	}
	return (s);
}
