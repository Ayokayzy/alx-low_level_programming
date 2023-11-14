#include "main.h"

/**
* _strstr - the function finds the first occurence of the substring
* needle in the string haystack
* @haystack: the string to search through
* @needle: the string to be found
* Return: a pointer to the beginning of the located substring
*/

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		index = 0;
		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);
				index++;
			} while (haystack[index] == needle[index]);
		}
		haystack++;
	}
	return ('\0');
}
