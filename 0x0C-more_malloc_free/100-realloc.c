#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory using malloc and free.
 * @ptr: pointer.
 * @old_size: unsigned int.
 * @new_size: unsigned int.
 * Return: Pointer.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *clone, *pointer;
	unsigned int i;

	if (ptr != NULL)
		clone = ptr;
	else
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	pointer = malloc(new_size);
	if (pointer == NULL)
		return (0);
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(pointer + i) = clone[i];
	}
	free(ptr);
	return (pointer);
}
