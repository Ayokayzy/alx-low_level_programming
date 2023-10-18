#include "main.h"
#include <stdio.h>

/**
 * clear_bit - a function that sets the value of a bit to 1 at a given index.
 * @n: the number to be checked
 * @index: the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == 0 || index > (8 * 8))
		return (-1);

	*n &= ~(1 << index);
	if (~*n & (1 << index))
		return (1);
	else
		return (-1);
}
