#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* *str_concat - concats two strings.
* @s1: the string to be concatenated to
* @s2: the string to be concatenated
* Return: a pointer to newly allocated space in memory
* which contains the contents of s1, followed vy the
* contents of s2, and null terminated
* if NULL is passed, treat as an empty string
* NULL on failure
*/

char *str_concat(char *s1, char *s2)
{
	int idx, s1len = 0, s2len = 0;
	int totlen;
	char *concat;

	while (s1[s1len])
		s1len++;
	while (s2[s2len])
		s2len++;
	totlen = s1len + s2len;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	concat = malloc(sizeof(char) * (totlen + 1));
	if (concat == NULL)
		return (NULL);
	for (idx = 0; idx < s1len; idx++)
	{
		concat[idx] = s1[idx];
	}
	for (idx = 0; idx < s2len; idx++)
	{
		concat[s1len++] = s2[idx];
	}
	concat[totlen] = '\0';
	return (concat);

}
