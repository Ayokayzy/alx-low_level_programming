#include "main.h"

/**
* _strncpy - copies at most an inputted number
* of bytes from string src into dest
* @dest: the buffer storing the string copy
* @src:the source string.
* @n: the maximun number of bytes to be copied
* Return: a pointer to the resulting string dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, srclen = 0;

	while (src[index++])
		srclen++;
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = srclen; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
