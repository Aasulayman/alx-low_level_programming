#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - check the code
 * @d : dod structure
 * @name: dog char
 * @age: dog float
 * @owner: dog parameter
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
