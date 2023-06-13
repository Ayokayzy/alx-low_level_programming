#include <stdio.h>

/**
 * main - Entry point
 * @argv: array pointers to argument strings
 * @argc: argument count
 * description: a program that prints all arguments it receives.
 * Return: Always Zero
 */

int main(int argc, char **argv)
{
	int idx;

	for (idx = 0; idx < argc; idx++)
		printf("%s\n", argv[idx]);
	return (0);
}
