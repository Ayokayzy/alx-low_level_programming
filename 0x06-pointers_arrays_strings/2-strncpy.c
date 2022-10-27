#include "main.h"

/**
* *_strncpy - copies a string
* @dest: the destination address
* @src: the string to be copied
* @n: the length of string to be copied
* Return: the copied string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
