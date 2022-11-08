#include "main.h"

/**
 * _strdup - using the strdup function.
 * @str: string.
 * Return: NULL if str is NULL.
 */

char *_strdup(char *str)
{
	char *duplicate;
	int a, b;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		;

	duplicate = (char *)malloc(sizeof(char) * (a + 1));

	if (duplicate == NULL)
		return (NULL);

	for (b = 0; b <= a; b++)
		duplicate[b] = str[b];

	return (duplicate);
}
