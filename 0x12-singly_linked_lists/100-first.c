#include <stdio.h>

/**
 * bmain - prints before main func is executed.
 * Return: Always 0.
 */

void __attribute__((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
