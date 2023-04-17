#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes variables of type struct dog
 *
 * @d: structure pointer
 * @name: dog name
 * @age: age of the dog
 * @owner: dog owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		;
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
