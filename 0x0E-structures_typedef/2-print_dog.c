#include "dog.h"

/**
 * print_dog - show object attribute values
 * @d: dog object
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	char *nil = "(nil)";
	char *name;
	char *owner;

	if (!d)
		return;

	name = d->name ? d->name : nil;
	owner = d->owner ? d->owner : nil;

	printf("Name: %s\n", name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", owner);
}
