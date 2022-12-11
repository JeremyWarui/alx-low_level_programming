#include "lists.h"

/**
 * find_listint_loop - finds the loop in the list
 * @head: the pointer to the head of the list
 * Return: address to the node where loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p, *q;

	p = q = head;
	while (p && q)
	{
		p = p->next;
		q = q->next->next;
		if (p == q)
		{
			p = head;
			while (p != q)
			{
				p = p->next;
				q = q->next;
			}
			return (p);
		}
	}
	return (NULL);
}
