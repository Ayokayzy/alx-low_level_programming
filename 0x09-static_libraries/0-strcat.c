#include "main.h"

/**
* _strcat - concatenates @src to @dest
* @src: the source string to append
* @dest: the destination string to be concatenated
* Return: pointer to the resulting string
*/

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int destlen = 0;

	while (dest[index++])
		destlen++;

	for (index = 0; src[index]; index++)
		dest[destlen++] = src[index];
	return (dest);
}
