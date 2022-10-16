#include<stdio.h>

/**
* main - Entry point
*
* Description: print all alphabet in lowercase except 'q' and 'e'
*
* Return: Always 0 (success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
		{
			ch++;
		}
		else
		{
			putchar(ch);
			ch++;
		}
	}

	putchar('\n');
	return (0);
}
