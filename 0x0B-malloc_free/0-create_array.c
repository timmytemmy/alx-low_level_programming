#include "main.h"

/**
 * create_array - creates an array of characters
 * @size: integer size
 * @c: character
 * Return: a pointer to an array or null if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int u;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(c));

	if (array == NULL)
		return (NULL);

	for (u = 0; u < size; u++)
		array[u] = c;

	return (array);
}
