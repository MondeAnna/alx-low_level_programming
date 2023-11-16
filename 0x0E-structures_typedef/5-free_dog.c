#include "dog.h"

/**
 * free_dog - free dynamically allocated dog object
 * @d: dog object
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
