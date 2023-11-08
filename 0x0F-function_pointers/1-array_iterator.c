#include "function_pointers.h"

/**
 * array_iterator - command pattern over array
 * @array: container
 * @size: container size
 * @action: command
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t iter;
	int elem;

	if (!array || !action)
		return;

	for (iter = 0; iter < size; iter++)
	{
		elem = array[iter];
		action(elem);
	}
}
