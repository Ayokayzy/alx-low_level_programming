#include "main.h"
#include <stdlib.h>

/**
* *_strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: the string given
* Return: pointer to dublicated string,
* NULL if str = NULL.
*/

char *_strdup(char *str)
{
	char *s;
	int i, strlen = 0;

	if (str == NULL)
		return (NULL);
	while (str[strlen])
		strlen++;
	s = malloc(sizeof(*s) * (strlen + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		s[i] = str[i];
	}
	s[strlen] = '\0';
	return (s);
}
