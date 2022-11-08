#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 * Return: NULL if function fails.
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int a, b, c, d;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;

	concat = malloc(sizeof(char) * (a + b + 1));

	if (concat == NULL)
		free(concat);
		return (NULL);

	for (c = 0; c < a; c++)
		concat[c] = s1[c];

	d = b;
	for (b = 0; b <= d; b++, c++)
		concat[c] = s2[b];

	return (concat);
}
