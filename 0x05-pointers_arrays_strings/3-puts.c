#include "main.h"

/**
* _puts - Entry point
* @str: the string to be printed
* Description: a function that prints a string.
* Return : void
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');

}
