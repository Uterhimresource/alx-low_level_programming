#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - funct
 * @d: structure pointer
 * @name: name of dog var
 * @age: age var
 * @owner: variable for owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
