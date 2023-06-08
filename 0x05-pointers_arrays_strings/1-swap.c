#include "main.h"

/**
* swap_int - Entry point
* @a: pointer variable
* @b: pointer variable
* Description: Swap value of two integers
* Return: void
*/

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
