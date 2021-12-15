include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node at the end of a dlistint_t list.
 * @head: double pointer to the head of a dll
 * @n: a data for a new node
 *
 * Returns: address of new node or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *temp;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = NULL;

	temp = *head;

	if (*head == NULL)
		*head = node;
	else
		while (temp != NULL)
		{
			if (temp->next == NULL)
			{
				node->prev = temp;
				temp->next = node;
				break;
			}

			temp = temp->next;
		}

	return (node);
}
