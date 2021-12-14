#include "lists.h"
/*
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: double pointer to the list
 * @n: integer for the new node to contain
 *
 * Return - new inserted node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	if (head == NULL)
	{
		return (NULL);
	}

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (*head != NULL)
	{
		*head = newNode;
	}

	else
	{
		(*head)->prev = new_node;
		new_node->next = (*head);
		*head = newNode;
	}

	return (newNode);


}
