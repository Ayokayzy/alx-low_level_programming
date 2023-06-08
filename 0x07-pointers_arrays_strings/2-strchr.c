#include "main.h"

/**
* *_strchr - a function that locates a character in a string
* @s: the string to check for character
* @c: the character to be found
* Return: pointer to the first occurence of the character in string
* returns NULL if the character is not found
*/

char *_strchr(char *s, char c)
{
	int idx = 0;

	for (idx = 0; s[idx] >= '\0'; idx++)
	{
		if (s[idx] == c)
			return (s + idx);
	}
	return ('\0');
}
