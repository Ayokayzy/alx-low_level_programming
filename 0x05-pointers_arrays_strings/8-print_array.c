#include "main.h"
#include <stdio.h>

/**
* print_array - prints n elements of an array, followed by a new line
* @a: the array
* @n: the number of element of the array to be printed
* Return: void
*/

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
