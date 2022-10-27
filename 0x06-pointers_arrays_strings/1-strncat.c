#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @*dest: destination
 * @*src: source
 * @n: bytes
 * Return: Pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int string = 0, string1 = 0;

	while (dest[string++])
		string1++;
	for (string = 0; src[string] && string < n; string++)
		dest[string1++] = src[string];
	return (dest);
}
