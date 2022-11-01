#include "main.h"

/**
* *_strpbrk - searches for any of a set of bytes
* @s: Themain string to be searched
* @accept: the string that is to be accepted
* Return: Return a pointer to the byte s that matchesone of
* the bytes in accept
*/

char *_strpbrk(char *s, char *accept)
{
	int idx = 0;

	while (*s)
	{
		for (idx = 0; accept[idx]; idx++)
		{
			if (*s == accept[idx])
				return (s);
		}
		s++;
	}
	return ('\0');
}
