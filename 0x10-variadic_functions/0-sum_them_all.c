#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of variable arguments
 * Return: If n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list op;
	unsigned int idx;
	int sum;

	if (n == 0)
		return (0);
	va_start(op, n);
	sum = 0;

	for (idx = 0; idx < n; idx++)
	{
		sum += va_arg(op, int);
	}
	va_end(op);
	return (sum);
}
