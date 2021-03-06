#include "lists.h"

/**
* print_dlistint - prints nodes of doubly linkedlist
* @h: pointer to the list
*
* Return: no:of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
