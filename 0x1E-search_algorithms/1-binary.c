#include "search_algos.h"
/**
 * binary_search - a function that searches for a value in a
 * sorted array of integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the index where value is located
 * If value is not present in array or if array is NULL,
 * your function must return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t half;

	if (size == 1 && array[0] == value)
	{
		print_array(array, 1);
		return (0);
	}

	print_array(array, size);
	if (size / 2 != 0)
	{
		half = size / 2;
		if (array[half] == value)
		{
			print_array(&array[half], half);
			return (half);
		}

		return (
			binary_search(value > array[half]
			? (size % 2 == 0 ? &array[half] : &array[half + 1])
			: array, value > array[half] ? half : half - 1, value)
		);
	}
	return (-1);
}

/**
 * print_array - prints an array
 * @array: the array to print
 * @size: the size of the array
 */

void print_array(int *array, size_t size)
{
	size_t idx = 0;

	printf("Searching in array: ");
	while (idx < size)
	{
		printf("%d", array[idx]);
		if (idx + 1 != size)
			printf(", ");
		else
			printf("\n");
		idx++;
	}
}
