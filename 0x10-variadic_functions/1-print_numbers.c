#include "stdarg.h"
#include "stdio.h"
#include "variadic_functions.h"

/**
* print_numbers - print numbers followed by a new line
* @separator: the string to be printed between numbers
* @n: the number of integers to be printed
*/

void print_numbers(const char *separator, unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	/* initialize the argument list */
	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < n - 1 && separator != NULL)
			printf("%s ", separator);
	}
	printf("\n");
	/* clean up */
	va_end(ap);
}
