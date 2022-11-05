#include "main.h"

/**
* find_sqrt - Finds the natural squrea root of an inputed number.
* @num: The number to find the squre root of.
* @root: the root to be tested.
* Return: if the number has a natural square root - the square root.
*  if the number does not have a natural square root - -1.
*/

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: the number
* Return: if no natural sqrt, return -1
*/

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
