#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of and array of integers
 * @a: array 1
 * @n: array 2
 * Return:Always 0
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if  (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
