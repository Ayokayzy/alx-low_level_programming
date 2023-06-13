#include "main.h"

/**
 * create_array - a function that creates an array
 * of chars, and initializes it with a specific char.
 * @size: the size of the arrray
 * @c: the characters
 * Return:  a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
