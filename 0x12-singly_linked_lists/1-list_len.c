#include "lists.h"

/**
 * list_len - a function that prints all the elements of a list_t list.
 * @h: address of the first element in a list
 * Return: the number of elements in a linked list_t list.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
