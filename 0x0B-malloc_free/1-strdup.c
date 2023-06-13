#include "main.h"

/**
 * _strdup - a function that returns a pointer
 * to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: the string parameter
 * Return: NULL if str = NULL
 * On success, the _strdup function returns a pointer to
 * the duplicated string. It returns NULL if
 * insufficient memory was available
 */

char *_strdup(char *str)
{
	int strlen = 0, i;
	char *s;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		strlen++;

	s = malloc(sizeof(char) * strlen);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < strlen; i++)
		s[i] = str[i];

	return (s);
}
