#include "function_pointers.h"

/**
 * int_index - get index of element
 * @array: container
 * @size: container size
 * @cmp: pointer to comparator
 *
 * Return: index if found, -1 elsewise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int error = -1, not_found = -1;
	int iter, elem;

	if (!array || !cmp)
		return (error);

	for (iter = 0; iter < size; iter++)
	{
		elem = array[iter];

		if (cmp(elem))
			return (iter);
	}

	return (not_found);
}
