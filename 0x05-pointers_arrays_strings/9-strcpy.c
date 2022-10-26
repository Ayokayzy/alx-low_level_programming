#include "main.h"
#include <stdio.h>

/**
* *_strcpy - copies the string pointed to by src,
* including the termination null byte
* @dest: the destination to copy
* @src: the string to copy
* Return: string char
*/

char *_strcpy(char *dest, char *src)
{
	int i, len = 0;

	while (src[len])
		len++;

	i = 0;

	while (len--)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest + '\0');
}
