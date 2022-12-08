#include "lists.h"

/**
 * print_dlistint - function to display doubly linked list
 * @h: pointer to the head
 * Return: no of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int n;
	
	n = 0;
	if (h == NULL)
		return (n);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
