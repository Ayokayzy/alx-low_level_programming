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

	while (i <= n)
	{
		if (i != n)
		{
			printf(a[i] + '0');
			printf(", ");
		}
		else
		{
			printf(a[i] + '0');
		}
		i++;
	}
	_putchar('\n');
}
