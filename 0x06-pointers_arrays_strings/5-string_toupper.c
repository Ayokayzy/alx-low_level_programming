#include "main.h"

/**
* *string_toupper - changes all lowercase to uppercase.
* @str: the string
* Return: the converted string
*/

char *string_toupper(char *str)
{
	int idx = 0;

	while (str[idx])
	{
		if (str[idx] >= 'a' && str[idx] <= 'z')
		{
			str[idx] = str[idx] - 32;
		}
		idx++;
	}
	return (str);
}
