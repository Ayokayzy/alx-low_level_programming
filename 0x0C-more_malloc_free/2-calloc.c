#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array of nmemb elements
 * of 'size' bytes each snd returns a pointer to the allocated
 * memory
 * @nmemb: number of array elements
 * @size: the size of the array
 * Return: allocated memory set to zero
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int idx;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);
	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (idx = 0; idx < (nmemb * size); idx++)
		filler[idx] = '\0';
	return (mem);
}
