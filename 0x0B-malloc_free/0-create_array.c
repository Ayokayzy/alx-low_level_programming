#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* *create_array - creates an array oc chars, and initializes
* it with a specific char.
* @size: the size of the char
* @c: the charcter array
* Return: a pointer to array or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);
	s = malloc(sizeof(*s) * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
