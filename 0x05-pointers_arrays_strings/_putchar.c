#include <unistd.h>

/**
* _putschar - prints character
* @c: The character to be printed
* Return: Always 0 (success)
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
