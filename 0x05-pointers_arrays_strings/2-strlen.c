#include "main.h"

/**
* _strlen - Entry point
* @s: pointer string
* Description: return the lenth of string
* Return: length of string
*/

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		*s++;
		return (i);
	}
}
