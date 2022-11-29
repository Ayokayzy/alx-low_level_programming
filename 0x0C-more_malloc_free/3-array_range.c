#include "main.h"
#include <stdlib.h>

/**
 * *array_range - create an array of integers that contains
 * all the values from min to max, ordered from min to max
 * @min: the minimum value
 * @max: the maximum value
 * Return: pointer to the newly created array
 * if min > max - NULL
 * if malloc fails - NULL
 */

int *array_range(int min, int max)
{
	int *arr, idx, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	arr = malloc(sizeof(*arr) * size);
	if (arr == NULL)
		return (NULL);

	for (idx = 0; idx < size; idx++)
	{
		arr[idx] = min++;
	}
	return (arr);
}
