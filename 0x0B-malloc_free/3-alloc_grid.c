#include "main.h"

/**
 * alloc_grid - a function that returns a pointer to a
 * two dimensional array of integers.
 * @width: the width of the matrix
 * @height: the height of the matrix
 * Return: NULL on failure,
 * If width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int x, y;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int) * height);
	if (arr == NULL)
		return (NULL);

	for (y = 0; y < height; y++)
	{
		arr[y] = malloc(sizeof(int) * width);
		if (arr[y] == NULL)
		{
			for (; y >= 0; y--)
				free(arr[y]);
			free(arr);
			return (NULL);
		}
	}

	for (y = 0; y < height; y++)
	{
		for (x = 0; x < width; x++)
			arr[y][x] = 0;
	}
	return (arr);
}
