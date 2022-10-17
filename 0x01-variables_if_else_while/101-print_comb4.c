#include <stdio.h>

/**
* main - Entry point
*
* Description: A program that prints all possible combination of three digits
* The three digits must be different
* 012, 120, 102, 021, 210, 201 are considered same combination of 0, 1 & 2
* print only the smallest combination
* numbers should be printed in ascending order
*
* Return: Always 0 (success)
*/

int main(void)
{
	int unit;
	int tens;
	int hundred;

	for (hundred = 0; hundred < 10; hundred++)
	{
		for (tens = 0; tens < 10; tens++)
		{
			for (unit = 0; unit < 10; unit++)
			{
				if (hundred < tens && tens < unit && hundred != tens && tens != unit)
				{
					putchar(hundred + '0');
					putchar(tens + '0');
					putchar(unit + '0');

					if (hundred == 7 && tens == 8 && unit == 9)
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
	}

	return (0);
}
