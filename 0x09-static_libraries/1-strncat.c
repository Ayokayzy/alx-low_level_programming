#include "main.h"

/**
* _strncat - concatenates two strings using at most
* an inputted number of byte from src
* @dest: the string to be appended upon
* @src: the string to be appended
* @n: the number of bytes from src to be appended to dest
* Return: a pointer to the resulting string dest.
*/

char *_strncat(char *dest, char *src, int n)
{
	int idx = 0, destlen = 0;

	while (dest[idx++])
		destlen++;

	for (idx = 0; src[idx] && idx < n; idx++)
		dest[destlen++] = src[idx];
	return (dest);
}
