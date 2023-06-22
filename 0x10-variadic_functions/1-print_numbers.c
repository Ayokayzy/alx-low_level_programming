#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list op;
	unsigned int idx;

	va_start(op, n);

	for (idx = 0; idx < n; idx++)
	{
		printf("%d", va_arg(op, int));
		if (idx != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
