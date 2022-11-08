#include <stdio.h>

/**
* main - Entry point
* Description: prints the number of arguments passed into it
* @argc: the number of arguments
* @argv: list of all the arguments
* Return: Always 0 (success)
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
