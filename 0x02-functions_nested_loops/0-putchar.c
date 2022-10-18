#include <stdio.h>
#include "main.h"

/**
* main - Entry point
*
* Describe: A program that prints "_putchar"
*
* Return: Always 0 (success)
*/

int main(void)
{
	char str[] = "_putchar\n";
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return(0);
}
