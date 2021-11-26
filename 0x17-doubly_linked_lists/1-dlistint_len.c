#include "lists.h"


/**
* dlistint_len - prints no:of elements of doubly linkedlist
* @h: pointer to the list
*
* Return: no:of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
