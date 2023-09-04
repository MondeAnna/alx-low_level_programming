#include "dog.h"

/**
 * _strcpy - coput string to new memory block
 * @dest: destination
 * @src: source
 *
 * Return: copied string (char *)
 */
char *_strcpy(char *dest, char *src)
{
	char *begin = dest;

	while (*src)
		*begin++ = *src++;

	*begin = *src;

	return (dest);
}

/**
 * _strlen - get length of a string
 * @s: string in question
 *
 * Return: length of string (int)
 */
int _strlen(char *s)
{
	if (!(*s))
		return (0);
	return (1 + _strlen(++s));
}

/**
 * new_dog - dynamically allocated dog object
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 *
 * Return: pointer to dog object (dog_t *)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));
	const short int null_byte = 1;

	if (!dog || !name || !owner)
		return (NULL);

	dog->name = malloc(sizeof(*name) * _strlen(name) + null_byte);
	dog->owner = malloc(sizeof(*owner) * _strlen(owner) + null_byte);

	if (!dog->name || !dog->owner)
		return (NULL);

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);

	dog->age = age;

	return (dog);
}
