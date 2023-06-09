#include "main.h"

int _strlen(char *s);
int check_palindrome(char *s, int len, int index);

/**
 * _strlen - Finds the length of a string
 * @s: the string
 * Return: returns the length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += _strlen(s + len);
	}
	return (len);
}

/**
 * check_palindrome - checks if two character are the same
 * @s: the string to be checked
 * @len: the length of the string
 * @index: the current index where the character is being checked
 * Return: If the string is a palindrome - 1
 * If the string is not palindrome - 0
 */

int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));
	return (0);
}

/**
 * is_palindrome - Checks is a string is a palindrome
 * @s: the string to be checked
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int index = 0;
	int len = _strlen(s);

	if (!(*s))
		return (1);
	return (check_palindrome(s, len, index));
}
