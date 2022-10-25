#include "main.h"

/**
* puts_half - prints half of a string
* @str:  the string to print
* Return: void
*/

void puts_half(char *str)
{
	int half, i = 0;

	while (str[i])
		i++;

	if (i % 2 == 0)
	{
		half = i / 2;

		while (half < i)
		{
			_putchar(str[half]);
			half++;
		}
		_putchar('\n');
	}
	else
	{
		half = (i - 1) / 2;

		while (half < i - 1)
		{
			_putchar(str[half + 1]);
			half++;
		}
		_putchar('\n');
	}
}
