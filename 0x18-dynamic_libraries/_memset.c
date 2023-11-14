#include "main.h"

/**
* *_memset - A function that fills memory with a constant byte.
* @s: pointer to memory
* @b: the constant byte
* @n: the number of bytes to be filled
* Return: a pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
