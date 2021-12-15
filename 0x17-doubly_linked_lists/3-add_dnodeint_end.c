#include "lists.h"

/**
 * add_dnodeint_end - add node at the end
 * @head: Head pointer
 * @n: Value to insert in the new node
 *
 * Return: New node or NULL if fails.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp = *head;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (new);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;

	}

	new->prev = tmp;
	new->next = NULL;
	tmp->next = new;

	return (new);
}
