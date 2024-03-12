#include "search_algos.h"

/**
 * linear_search - a function that searches for a value in an
 * array of integers using the Linear search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located
 * If value is not present in array or if array is NULL,
 * your function must return -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t idx = 0;

	while (idx < size)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
		idx++;
	}
	return (-1);
}
