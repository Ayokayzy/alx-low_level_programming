#include "main.h"

/**
* _strcmp - Conpares two strings
* @s1: string to compare
* @s2: string to compare
* Return: number of strings that matches
*/

int _strcmp(char *s1, char *s2)
{
	int s1len = 0, s2len = 0;

	while (s1[s1len])
		s1len++;
	while (s2[s2len])
		s2len++;

	return (s1 - s2);
}
