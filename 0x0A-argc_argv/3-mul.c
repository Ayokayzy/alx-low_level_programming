#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argv: array pointers to argument strings
 * @argc: argument count
 * description: a program that multiplies two numbers.
 * Return: Always Zero
 */

int main(int argc, char **argv)
{
	int num1, num2, mul;
	if (argc < 2)
	{
		printf("Error\n");
		return (0);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;
	printf("%d\n", mul);
	return (0);
}
