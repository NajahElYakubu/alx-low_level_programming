#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - function to initialize a variable of type struct dog
 * @d: pointer
 * @name: name
 * @age: age
 * @owner: wner
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
