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
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %f\n", d->age);
		if (d->owner == 0)
			printf("owner: %s\n", d->owner);
		else
			printf("owner: (nil)\n";
	}
}
