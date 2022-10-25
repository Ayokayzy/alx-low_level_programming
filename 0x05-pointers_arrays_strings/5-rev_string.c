#include "main.h"

/**
* rev_string - Reverses a string
* @s: the string to reverse
* Return: void
*/

void rev_string(char *s)
{
	int i, half, len = 0;
	char newstr;

	while (s[len])
		len++;
	i = 0;

	half = len / 2;

	while (half--)
	{
		newstr = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = newstr;
		i++;
	}
}
