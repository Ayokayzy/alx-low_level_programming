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
	int val;

	while (s1[s1len])
		s1len++;
	while (s2[s2len])
		s2len++;

	if (s1len > s2len)
		val = 15;
	if (s1len == s2len)
		val = 0;
	if (s1len < s2len)
		val = -15;
	return (val);
}
