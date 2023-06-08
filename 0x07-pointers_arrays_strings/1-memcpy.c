#include "main.h"

/**
* *_memcpy - A function that copies memory area
* @dest: The address to copy memory to
* @src: The addtess to be copied
* @n: the number of memory to be copied
* Return: The destination address value
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int idx = 0;

	for (idx = 0; idx < n; idx++)
	{
		dest[idx] = src[idx];
	}
	return (dest);
}
