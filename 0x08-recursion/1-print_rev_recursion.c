#include "main.h"

/**
* _print_rev_recursion - prints a strinf in reverse
* @s: the provided string
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
