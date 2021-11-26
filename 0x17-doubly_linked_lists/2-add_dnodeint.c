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
	if (newNode = NULL)
	{
		return (NULL);
	}

	newNode->n;
	newNode->prev = NULL;
	newNode->next = *head;

	if (*head == NULL)
	{
		(*head)->prev = newNode;
	}

	*head = newNode;

	return (newNode);
}
