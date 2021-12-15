#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node of a linked list
 * @head: Head pointer
 * @index: Index
 *
 * Return: Node of NULL if fails.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (i < index)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		i++;
	}
	return (head);
}
