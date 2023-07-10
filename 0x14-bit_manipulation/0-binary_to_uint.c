#include "main.h"

/**
 * _pow - a function that returns the exponent
 * @n: the base number
 * @power: the power number
 * Return: the exponent
 */

int _pow(int n, int power)
{
	if (power == 0)
		return (1);
	if (power == 1)
		return (n);
	return (n * _pow(n, power - 1));
}


/**
 * binary_to_uint - a function that converts a binary number to
 * an unsigned int.
 * @b:  is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int i, bit;

	if (b == NULL)
		return (0);

	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		i++;
	}

	bit = 0;
	for (i -= 1; i >= 0; i--)
	{
		if (b[i] == '1')
			dec = dec + 1 * _pow(2, bit);
		else if (b[i] == '0')
			dec = dec;
		bit++;
	}

	return (dec);
}
