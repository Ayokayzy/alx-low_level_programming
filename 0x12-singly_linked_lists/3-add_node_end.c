#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the beginning
 * of a list_t list.
 * @head: address of pointer to the head;
 * @str: the string value of the list
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	unsigned int nchar = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	while (*str++)
		nchar++;

	new->len = nchar;
	new->next = NULL;

	temp = *head;
	if (temp == NULL)
		*head = new;
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (*head);
}
