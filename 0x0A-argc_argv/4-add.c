#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argv: array pointers to argument strings
 * @argc: argument count
 * description: a program that adds positive numbers.
 * Return: Always Zero
 */

int main(int argc, char **argv)
{
	int idx, num;
	int add = 0;

	if (argc < 2)
	{
		printf("Error\n");
		return (0);
	}

	for (idx = 1; idx < argc; idx++)
	{
		if (argv[idx] > 64 && argv[idx] < 123)
		{
			printf("Error\n");
			return (0);
		}

		num = atoi(argv[idx]);
		add = add + num;
	}
	printf("%d\n", add);
	return (0);
}
