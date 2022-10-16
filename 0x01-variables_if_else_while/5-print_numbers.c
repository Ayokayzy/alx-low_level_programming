#include <stdio.h>

/**
* main - Entry point
*
* Description: Print all single number of base 10 starting from 0
*
* Return: Always 0 (sucsess)
*/

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}

	printf("\n");
	return (0);
}
