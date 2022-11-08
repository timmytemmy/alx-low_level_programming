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
	int a, b = 0, c = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] || s2[a]; a++)
		c++;

	concat = malloc(sizeof(char) * c);

	if (concat == NULL)
		return (NULL);

	for (a = 0; s1[a]; a++)
		concat[b] = s1[a];

	for (a = 0; s2[a]; a++)
		concat[b] = s2[a];

	return (concat);
}
