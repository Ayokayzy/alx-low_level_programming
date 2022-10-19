#include "main.h"

/**
* main - Entry Point
*
* Description: print _putchar
*
* Return: Always 0 (success)
*/

int main(void)
{
	char c[] = "_putchar\n";
	int i = 0;

	while (c[i] != '\0')
	{
		char str = c[i];

		_putchar(str);
		 i++;
	}
	return (0);
}
