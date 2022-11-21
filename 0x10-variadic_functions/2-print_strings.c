#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - prints a string followed by new line
* @separator: is the string to be printed between the strings
* @n: is the number of the strings passed to the function
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	/* initialize  the argument list */
	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str)
			printf("%s", str);
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	/* clean up */
	va_end(ap);
}
