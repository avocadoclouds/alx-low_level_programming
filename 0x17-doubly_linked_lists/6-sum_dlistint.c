#include "lists.h"

/**
 * sum_dlistint - sum the values in the linked list
 * @head: Head pointer
 *
 * Return: Sum of all the data or 0 if empty.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	const dlistint_t *tmp;

	tmp = head;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
