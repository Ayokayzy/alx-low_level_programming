#include <stdio.h>

/**
 * main - Entry point
 * @argv: array pointers to argument strings
 * @argc: argument count
 * description: a program that prints its name, followed by a new line.
 * Return: Always Zero
 */

int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
