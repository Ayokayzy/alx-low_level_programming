#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new
 * node at a given position.
 * @head: pointer to the first node
 * @idx: index of the list where the new node should be added.
 * @n: the value stored in the node
 * Return: the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp, *current;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (*head == NULL || idx == 0)
	{
		*head = new;
		new->next = NULL;
		return (*head);
	}
	current = *head;
	while (i < idx - 1)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
		i++;
	}

	temp = current->next;
	current->next = new;
	new->next = temp;

	return (new);
}
