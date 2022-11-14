#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - function prints a struct dog.
 * @d: pointer to structure.
 * Return: Always 0.
 */

void print_dog(struct dog *d)
{
	if (d == 0)
		return;
	if (d->name == 0)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == 0)
		printf("owner: %s\n", d->owner);
	else
		printf("owner: (nil)\n";
}
