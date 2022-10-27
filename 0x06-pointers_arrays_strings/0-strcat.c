#include "main.h"

/**
* *_strcat - concattenates two strings
* @dest: the original string
* @src: the string to be added
* Return: a concatenated string
*/

char *_strcat(char *dest, char *src)
{
	/* declare src length and dest length */
	int srclen = 0, destlen = 0;
	int i = 0;

	/* get length of src */
	while (src[srclen])
		srclen++;

	/* get length */
	while (dest[destlen])
		destlen++;

	/* set index of src char */

	while (srclen--)
	{
		dest[destlen] += src[i];
		i++;
		destlen++;

		if (srclen == 1)
			dest += '\0';
	}
	return (dest);
}
