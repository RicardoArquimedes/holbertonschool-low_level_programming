#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Data group of a dog
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 * @d: pointer
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;

}
