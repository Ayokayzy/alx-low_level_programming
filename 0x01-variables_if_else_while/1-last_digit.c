#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - Entry point
*
* Description: prints the last digit
*
*Return: Always 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastNumber = n % 10;

	if (lastNumber > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastNumber);
	}
	else if (lastNumber == 0)
	{
		printf("Last digit of %d is %d and is 0", n, lastNumber);
	}
	else if (lastNumber < 6 && lastNumber != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, lastNumber);
	}
}
