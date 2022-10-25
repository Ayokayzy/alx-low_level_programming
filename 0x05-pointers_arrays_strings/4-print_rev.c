#include <string.h>
#include <stdio.h>
#include "main.h"

/**
* print_rev - Entry point
* @str: the string to be printed
* Description: A function that prints a string in reverse
* Return: void
*/

void print_rev(char *str)
{
	int len = 0;

	while (str[len])
	{
		len++;
	}
	while (len--)
	{
		_putchar(str[len]);
	}
	_putchar('\n');
}
