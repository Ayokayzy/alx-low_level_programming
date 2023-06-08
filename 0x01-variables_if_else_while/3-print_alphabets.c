#include <stdio.h>

/**
* main - Entry point
*
* Description: prints the alphabet in lowercase
* and then in uppercase followed by a new line
*
*Return: Always 0 (success)
*/

int main(void)
{
	char lowerChar = 'a';
	char upperChar = 'A';

	while (lowerChar <= 'z')
	{
		putchar(lowerChar);
		lowerChar++;
	}

	while (upperChar <= 'Z')
	{
		putchar(upperChar);
		upperChar++;
	}

	putchar('\n');
	return (0);
}
