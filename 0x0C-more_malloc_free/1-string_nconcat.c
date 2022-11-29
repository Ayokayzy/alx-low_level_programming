#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the amout of byte of s2 to be concatenated
 * Return: NULL if function fails
 * if n is >= length of s2, return s2
 * if NULL is passed, treat as empty string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1len, idx;
	char *newstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1len = 0;
	while (s1[s1len])
		s1len++;

	newstr = malloc(sizeof(newstr) * (s1len + 1));
	if (newstr == NULL)
		return (NULL);
	for (idx = 0; idx < s1len; idx++)
		newstr[idx] = s1[idx];
	for (idx = 0; idx < n; idx++)
		newstr[s1len++] = s2[idx];
	newstr[s1len] = '\0';
	return (newstr);
}
