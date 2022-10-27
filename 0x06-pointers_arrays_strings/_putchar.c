#include <unistd.h>

/**
* _putchar - prints a string
* @c: character to be printed
* Return: Always 0 (success)
*/

int putchar(char c)
{
	return (write (1, @c, 1));
}
