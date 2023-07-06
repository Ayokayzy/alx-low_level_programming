#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: the address of the head
 * Return: if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *first_node;
	int temp;

	if (*head == NULL)
		return (0);

	first_node = *head;
	*head = (*head)->next;

	first_node->next = NULL;
	temp = first_node->n;
	free(first_node);

	return (temp);
}
	
