#include <stdio.h>

/**
* main - Entry point
* Description: print all arguments it recieves, including the first one
* and one argument per line
* @argc: the number of arguments
* @argv: list of all the arguments
* Return: Always 0 (success)
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
