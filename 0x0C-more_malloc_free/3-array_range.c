#include "main.h"

/**
 * array_range - create dynamically allocated int array
 * @min: min value
 * @max: max value
 *
 * Return: range of arrays from min to max (inclusive) (int *)
 */
int *array_range(int min, int max)
{
	int *array;
	int index;
	int range;

	if (min > max)
		return (NULL);

	range = max - min + 1;

	array = malloc(sizeof(min) * range);

	if (!array)
		return (NULL);

	for (index = 0; min <= max; index++, min++)
		array[index] = min;

	return (array);
}
