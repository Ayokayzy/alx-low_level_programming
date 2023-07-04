#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: address of the first element in a list
 * Return: the number of nodes
 * If str is NULL, print [0] (nil);
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
