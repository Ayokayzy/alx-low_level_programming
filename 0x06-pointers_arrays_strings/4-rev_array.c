#include "main.h"
#include<stdio.h>

/**
* reverse_array - reverses the content of an array of integers
* @a: the array to be reversed
* @n: the number of elements in the array
* Return: void
*/

void reverse_array(int *a, int n)
{
	int i = 0;
	int rev[99];

	while (n--)
	{
		rev[i] = a[n];
		i++;
	}

	for (n = 0; n < i; n++)
	{
		a[n] = rev[n];
	}
}
