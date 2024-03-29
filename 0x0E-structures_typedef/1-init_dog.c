#include "dog.h"

/**
 *  init_dog - initialized variables for struct dog
 * @d: pointer
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
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
