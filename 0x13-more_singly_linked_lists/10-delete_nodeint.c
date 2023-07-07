#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node
 * at index index of a listint_t linked list.
 * @head: the first node
 * @index:  the index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *new;
	unsigned int i;

	temp = *head;
	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	i = 0;
	while (i < index - 1)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
		i++;
	}

	new = temp->next->next;
	free(temp->next);
	temp->next = new;

	return (1);
}
