#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum integers.
 * @max: maximum integers.
 * Return: pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *array;
	int a = 0, b = min;

	if (min > max)
		return (NULL);
	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);
	while (a <= max - min)
		array[a++] = b++;
	return (array);
}
