#include "main.h"
#include <stdlib.h>

/**
* **alloc_grid - runction returns a pointer to
* a 2 dimentional array of integers
* @width: the width of the array
* @height: the height of the array
* Return: NULL on failure,
* NULL if width or height is 0 or negative
*/

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width == 0 || height == 0)
		return (NULL);
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
