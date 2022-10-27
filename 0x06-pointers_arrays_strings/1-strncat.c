#include "main.h"

/**
* *_strncat - concatenate n length of a string
* @dest: the destination string
* @src: the string to add
* @n: the length of string to add
* Return: the concatenated string
*/

char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int i = 0;

	while (dest[destlen])
		destlen++;

	while (i < n && src[i])
	{
		dest[destlen++] = src[i];
		i++;
	}
	return (dest);
}
