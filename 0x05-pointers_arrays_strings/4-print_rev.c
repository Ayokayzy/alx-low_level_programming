#include <string.h>
#include "main.h"

/**
* print_rev - Entry point
* @s: the string to be printed
* Description: A function that prints a string in reverse
* Return: void
*/

void print_rev(char *str)
{
	int len;

	len = strlen(str);
	while (str[len] < 0)
	{
		_putchar(str[len]);
		len--
	}
	_putchar('\n');
}
