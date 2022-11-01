#include "main.h"

/**
 * print_diagsums - function that prints the sum of two diagonals
 * @a: matrix.
 * @size: size of matrix.
 * * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int b, sum1 = 0, sum2 = 0;

	for (b = 0; b < size; b++)
	{
		sum1 += *(a + (size * b + b));
		sum2 += *(a + (size * b + size - 1 - b));
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
