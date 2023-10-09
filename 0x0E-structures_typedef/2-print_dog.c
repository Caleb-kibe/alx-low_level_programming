#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints the dog description
 * struct dog - describes a dog
 * @d: structure that holds elements of the dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (!d->name)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (!d->age)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);

	if (!d->owner)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
