#include "main.h"
#include <stdio.h>

/**
* _isupper - checks for uppercase character
* @c: parameter
* Return: 0 if successful
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
