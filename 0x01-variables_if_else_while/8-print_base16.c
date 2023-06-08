#include <stdio.h>

/**
* main - Entry point
*
* Description: prints all numbers of base 16 in lowercase
*
* Return: Always 0 (success)
*/

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}

	if (n == 10)
	{
		n = 'a';

		while (n <= 'f')
		{
			putchar(n);
			n++;
		}
	}

	putchar('\n');

	return (0);
}
