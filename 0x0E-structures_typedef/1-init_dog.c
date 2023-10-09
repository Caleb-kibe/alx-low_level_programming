#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - function that describes a dog
 * struct dog - structure that describes the dog
 * @d: points to the dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
