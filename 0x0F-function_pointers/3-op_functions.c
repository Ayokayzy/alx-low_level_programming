#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the addition of both numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts first number from second number
 * @a: first number
 * @b: second number
 *
 * Return: the remainder after second number has been
 * removed from first number
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multipllies two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the multiplication of both numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the division of both numbers
 */

int op_div(int a, int b)
{

	return (a / b);
}

/**
 * op_mod - divide first number by second number
 * @a: first number
 * @b: second number
 *
 * Return: the remainder from the division
 */

int op_mod(int a, int b)
{
	return (a % b);
}
