#include "search_algos.h"

/**
 * jump_search - a function that searches for a value in a
 * sorted array of integers using the Jump search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return:  the first index where value is located
 * If value is not present in array or if array is NULL,
 * your function must return -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t idx, prev = 0;
	size_t curr = 0;

	if (array == NULL || size == 0)
		return -1;

	while (curr < size && array[curr] < value)
	{
		printf("Value checked array [%ld] = [%d]\n", curr, array[curr]);
		prev = curr;
		curr += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev, curr);

	for (idx = prev; idx < (prev + step + 1) && idx < size; idx++)
	{
		printf("Value checked array [%ld] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return idx;
	}

	return -1;
}
