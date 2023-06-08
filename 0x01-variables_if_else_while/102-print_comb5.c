#include <stdio.h>

/**
* main - Entry point
*
* Description: A program that prints all possible combination of three digits
* 01 & 10 are considered same combination of 0 & 1
* print only the smallest combination
*
* Return: Always 0 (success)
*/

int main(void)
{
	int dig1;
	int dig2;

	for (dig1 = 0; dig1 < 100; dig1++)
	{
		for (dig2 = 0; dig2 < 100; dig2++)
		{
			if (dig1 != dig2 && dig1 < dig2)
			{
				putchar((dig1 / 10) + '0');
				putchar((dig1 % 10) + '0');
				putchar(' ');
				putchar((dig2 / 10) + '0');
				putchar((dig2 % 10) + '0');

				if (dig1 == 98 && dig2 == 99)
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	return (0);
}
