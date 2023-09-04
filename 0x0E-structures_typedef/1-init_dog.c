#include "dog.h"

/**
 * init_dog - assign values to dog object
 * @d: dog object
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog's owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
