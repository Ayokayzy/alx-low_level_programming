#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints the sum of two diagonals of
* a square matrix
* @a: the matrix of integers.
* @size: The size of the matrix
*/

void print_diagsums(int *a, int size)
{
	int idx, sum1 = 0, sum2 = 0;

	for (idx = 0; idx < size; idx++)
	{
		sum1 += a[idx];
		a += size;
	}
	a -= size;
	for (idx = 0; idx < size; idx++)
	{
		sum2 += a[idx];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
