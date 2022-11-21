#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - the functions returns sum of all its parameters
* @n: required argument
* Return: 0 - if n == 0
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	/* initialize the argument list */
	va_start(ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		/* get the next argument value */
		sum += va_arg(ap, int);
	}
	/* clean up */
	va_end(ap);
	return (sum);
}
