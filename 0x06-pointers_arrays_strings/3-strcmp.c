#include "main.h"

/**
* _strcmp - Conpares two strings
* @s1: string to compare
* @s2: string to compare
* Return: number of strings that matches
*/

int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
