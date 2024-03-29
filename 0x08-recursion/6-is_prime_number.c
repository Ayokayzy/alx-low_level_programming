#include "main.h"

int is_divisible(int num, int div);

/**
 * is_divisible - Checks if a number is divisible.
 * @num: the number to be checked.
 * @div: The divisor.
 * Return: If the number is divisible - 0.
 * If the number is not divisible - 1.
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div == num / 2)
		return (1);
	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - the function checks is a number is
 * a prime number
 * @n: the input integer
 * Return: ! if the input integer is a prime number,
 * otherwise return 1
 */

int is_prime_number(int n)
{
	int div = 2;

	if  (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);
	return (is_divisible(n, div));
}
