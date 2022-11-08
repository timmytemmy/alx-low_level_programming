#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2D array.
 * @width: width.
 * @height: height.
 * Return: NULL if function fails.
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int a, b;

	if (width == 0 || height == 0)
		return (NULL);

	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		array[a] = malloc(width * sizeof(int));
		if (array[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(array[a]);
			free(array);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			array[a][b] = 0;
	}
	return (array);
}
