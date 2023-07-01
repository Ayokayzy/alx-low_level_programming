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
	int i, j, num;
	int add = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[i]);
		add = add + num;
	}
	printf("%d\n", add);
	return (0);
}
