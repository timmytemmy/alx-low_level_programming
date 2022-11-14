#include "dog.h"
#include <stdio.h>

/**
 * init_dog - using the dog function.
 * @d: dog array.
 * @name: name.
 * @age: age.
 * @owner: owner.
 * Description: The struct is for dog.
 * Return: Always 0.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
