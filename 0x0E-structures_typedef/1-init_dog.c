#include "dog.h"

/**
 * init_dog -initializes the structures
 * @name: name of dog
 * @age: age
 * @owner: owner
 * @d: d
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
