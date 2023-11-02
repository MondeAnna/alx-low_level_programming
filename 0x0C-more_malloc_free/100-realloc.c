#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: destination memory
 * @src: source memory
 * @n: memory size to copy
 *
 * Description: project does not seem to be bothered
 * with checking for memory overlap due to declaring
 * dest and src with explicity memory sizes
 *
 * Return: destination memory (void *)
 */
void *_memcpy(void *dest, void *src, unsigned int n)
{
	char *dest_char = (char *) dest;
	char *src_char = (char *) src;

	while (n--)
		dest_char[n] = src_char[n];

	return ((void *) dest_char);
}

/**
 * _realloc - dynamic memeory reallocation
 * @ptr: pointer to previously allocatied memory block
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: size, in bytes of the new memory block
 *
 * Return: pointer to reallocated memory (void *)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_block;
	int copy_size;

	if (new_size == old_size)
		return (ptr);

	if (ptr && !new_size)
	{
		free(ptr);
		return (NULL);
	}

	new_block = malloc(new_size);

	if (!new_block)
		return (NULL);

	copy_size = new_size <= old_size ? new_size : old_size;
	_memcpy(new_block, ptr, copy_size);

	free(ptr);

	return (new_block);
}
