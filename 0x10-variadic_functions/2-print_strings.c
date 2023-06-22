#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - a function that prints strings, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list op;
	unsigned int idx;
	char *str;

	va_start(op, n);

	for (idx = 0; idx < n; idx++)
	{
		str = va_arg(op, char *);
		if (str)
			printf("%s", str);
		else
			printf("nil");

		if (idx != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(op);
}
