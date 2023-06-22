#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: the list of numbers to be searched
 * @size: the size of the array
 * @cmp: the array that compares
 * Return: returns the index of the first element
 * for which the cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int idx;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		if (cmp(array[idx]) != 0)
		{
			return (idx);
		}
	}
	return (-1);
}
