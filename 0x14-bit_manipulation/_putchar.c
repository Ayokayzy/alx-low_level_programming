#include "main.h"
#include <stdlib.h>

/**
 * _putchar - prints a single character
 * @c: the character to be printed
 * Return: 1
 */

int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
