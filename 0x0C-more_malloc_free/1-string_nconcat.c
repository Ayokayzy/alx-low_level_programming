#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: string to be concatenated to
 * @s2: string to be concatenated with
 * @n: length of s2 to be concatenated
 * Return: newly allocated space in memory, which contains s1,
 * followed by the first n bytes of s2, and null terminated
 * If the function fails, it should return NULL
 * If n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int idx, strlen = 0;

	for (idx = 0; s1[idx]; idx++)
		strlen++;

	concat = malloc(sizeof(char) * strlen + n + 1);

	if (concat == NULL)
		return ("");

	for (idx = 0; idx < strlen; idx++)
	{
		concat[idx] = s1[idx];
	}

	for (idx = 0; idx < n; idx++)
		concat[strlen + idx] = s2[idx];

	concat[strlen + n] = '\0';
	return (concat);
}
