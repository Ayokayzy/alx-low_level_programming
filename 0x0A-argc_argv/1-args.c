#include <stdio.h>

/**
 * main - Entry point
 * @argv: array pointers to argument strings
 * @argc: argument count
 * description: A program that prints the number of arguments passed into it.
 * Return: Always Zero
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
