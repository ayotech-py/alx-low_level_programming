#include "dog.h"
#include <stdlib.h>

/**
 * init_dog -initializes the structures
 * @name: name of dog
 * @age: age
 * @owner: owner
 * @d: d
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
