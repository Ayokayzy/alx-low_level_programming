#include "main.h"
#include <stdio.h>

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 * @n: the number to be checked
 * @index: the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	*n = *n | (1 << index);

	return (1);
}
