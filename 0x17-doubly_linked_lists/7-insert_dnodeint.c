#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at given position
 * @h: pointer to refer
 * @idx: position to insert
 * n: data for the new node
 * Return: pointer to new node or null if unsuccesful
 *
 */

/**
 * length - find length of list
 * @h: pointer to head
 * Return: length of list
 */

unsigned int length(dlistint_t *node)
{
	unsigned int len;

	len = 0;

	while (node != NULL)
		node = node->next;
	return (len);
}

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new, *tmp;

	/* if (idx > length(*h))
	 	return NULL;
	*/
	if (idx == 0)
	{
		tmp = *h;
		new = malloc(sizeof(dlistint_t));
		new->n = n;
		new->prev = NULL;
		new->next = tmp;
		tmp->prev = new;
		tmp = new;
	}
	else
	{
		tmp = *h;
		for (i = 0; i < idx - 1; i++)
			tmp = tmp->next;
		new = malloc(sizeof(dlistint_t));
		new->n = n;
		new->next = tmp->next;
		new->prev = tmp;
		if (tmp->next)
			tmp->next->prev = new;
		tmp->next = new;
	}

	return new;
}
