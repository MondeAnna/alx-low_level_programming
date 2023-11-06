#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - dog object
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog's owner
 *
 * Description: dog object
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
