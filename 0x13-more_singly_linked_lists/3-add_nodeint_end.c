#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node
 * at the beginning of a listint_t list.
 * @head: pointer to the address of the first node
 * @n: the value to be stored in the node
 * Return: the address of the new element,
 * or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	temp = *head;
	if (temp == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp != NULL && temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;

	return (new);
}
