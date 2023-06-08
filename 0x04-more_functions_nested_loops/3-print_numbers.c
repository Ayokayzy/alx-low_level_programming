#include "main.h"

/**
* print_numbers - Entry point
*
* Description: prints the number from 0 to 9,
* followed by new line
*
* Return: -
*/

void print_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		_putchar(num + '0');
		num++;
	}
	_putchar('\n');
}
