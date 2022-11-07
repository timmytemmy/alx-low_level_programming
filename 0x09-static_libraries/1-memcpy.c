#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: destination.
 * @src: source.
 * @n: unsigned int.
 * Return: *dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	for (; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
