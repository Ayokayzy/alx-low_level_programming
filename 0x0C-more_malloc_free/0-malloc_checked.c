#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - function allocates memory using malloc
 * @b: the value to check
 * Return: a pointer to allocated memory
 * if malloc fails, terminate process with value status 98
 */

void *malloc_checked(unsigned int b)
{
	void *memory = malloc(b);

	if (memory == NULL)
		exit(98);

	return (memory);
}
