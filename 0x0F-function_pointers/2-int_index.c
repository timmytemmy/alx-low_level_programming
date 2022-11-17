#include "function_pointers"

/**
 * int_index - function that searches for an integer.
 * @array: array.
 * @size: number of elements in the array.
 * @cmp: pointer.
 * Return: negative 1 if no element match or pointer to first element.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!array || !cmp)
		return (-1);

	for(; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
