#include "main.h"
#include <stdio.h>

/**
* main - Entry point
* Description: A program that prints its name,
* follwed by a newline
* @argc: argument count
* @argv: list of arguments
* Return:  Always 0 (success)
*/

int main(int argc, char* argv[])
{
	(void)argc;
	printf("%s\n", argv[0]); 
	return (0);
}
