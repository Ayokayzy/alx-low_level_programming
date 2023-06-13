#include "main.h"

/**
 * str_concat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: The returned pointer should point to a newly
 * allocated space in memory which contains the contents
 * of s1, followed by the contents of s2, and null terminated
 * if NULL is passed, treat it as an empty string
 * The function should return NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int idx, concat_idx = 0, len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (idx = 0; s1[idx] || s1[idx]; idx++)
		len++;

	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
		return (NULL);

	for (idx = 0; s1[idx]; idx++)
		concat_str[concat_idx++] = s1[idx];

	for (idx = 0; s2[idx]; idx++)
		concat_str[concat_idx++] = s2[idx];
	return (concat_str);
}
