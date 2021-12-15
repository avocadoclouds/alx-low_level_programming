#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: Head pointer
 * @idx: Index
 * @n: Value
 *
 * Return: Node or NULL if fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp;
	dlistint_t *new;
	unsigned int i = 0;

	tmp = *h;

	if (h == NULL || (tmp == NULL && idx != 0))
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	while (tmp != NULL)
	{
		if (idx == i)
		{
			new->prev = tmp->prev;
			new->next = tmp;
			(tmp->prev)->next = new;
			tmp->prev = new;
			return (new);
		}
		if ((idx - 1) == i && tmp->next == NULL)
		{
			return (add_dnodeint_end(h, n));
		}
		tmp = tmp->next;
		i++;
	}
	free(new);
	return (NULL);
}
