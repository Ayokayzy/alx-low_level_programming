#include <stdio.h>

/**
* main - Entry point
*
* Description: A program that prints all possible combination of two digits
* 01 & 10 are considered same combination of 0 & 1
* print only the smallest combination
*
* Return: Always 0 (success)
*/

int main(void)
{
	int unit;
	int tens;

	for (tens = 0; tens < 10; tens++)
	{
		for (unit = 0; unit < 10; unit++)
		{
			if (tens < unit && tens != unit)
			{
				putchar(tens + '0');
				putchar(unit + '0');

				if (tens == 8 && unit == 9)
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
