#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: Head pointer
 * @index: Index
 *
 * Return: 1 - success or -1 - failure.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i = 0;

	if (*head == NULL || head == NULL)
		return (-1);

	while (i < index)
	{
		tmp = tmp->next;

		if (tmp == NULL)
			return (-1);
		i++;
	}

	if (index == 0)
	{
		*head = tmp->next;
		if (tmp->next != NULL)
			(tmp->next)->prev = NULL;
		free(tmp);
		return (1);
	}

	if (tmp->next == NULL)
	{
		(tmp->prev)->next = NULL;
	}
	else
	{
		(tmp->prev)->next = tmp->next;
		(tmp->next)->prev = tmp->prev;
	}
	free(tmp);
	return (1);
}
