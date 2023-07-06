#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of
 * a listint_t linked list.
 * @head: the address of the first node
 * @index: the index of the node, starting at 0
 * Return: if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL && i < index; i++)
		head = head->next;

	if (i < index)
		return (0);
	return (head);
}
