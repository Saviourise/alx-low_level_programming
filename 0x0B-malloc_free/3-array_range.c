#include "main.h"

/**
 * array_range - it creates an array of integers.
 * @min: minimum parameter.
 * @max: maximum parameter
 *
 * Return: the array.
 */

int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
	{
		return (0);
	}
	arr = malloc((max - min + 1) * sizeof(int));

	if (!arr)
	{
		return (0);
	}
	for (i = 0; min <= max; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
