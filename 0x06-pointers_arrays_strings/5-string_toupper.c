#include "main.h"

/**
* *string_toupper - changes all lowercase to uppercase.
* @str: the string
* Return: the converted string
*/

char *string_toupper(char *str)
{
	int idx = 0;

	while (str[idx] != '\n')
	{
		if (str[idx] > 96 && str[idx] <= 122)
		{
			str[idx] = str[idx] - 32;
		}
		idx++;
	}
	return (str);
}
