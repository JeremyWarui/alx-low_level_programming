#include "lists.h"

/**
 * count_nodes_before_loop - counts no of nodes before loop
 * @head: pointer to head of list
 * Return: no of nodes before loop
 */

int count_nodes_before_loop(const listint_t *head)
{
	int count = 0;
	const listint_t *p, *q;

	p = q = head;
	while (p && q)
	{
		p = p->next;
		q = q->next->next;
		count++;
		if (p == q)
		{
			p = head;
			while (p != q)
			{
				p = p->next;
				q = q->next;
				count++;
			}
			return (count);
		}
	}
	return (0);
}

/**
 * isLoop - check if list is loop
 * @head: pointer to head of the list
 * Return: 1 if true and 0 if otherwise
 */

int isLoop(const listint_t *head)
{
	const listint_t *p, *q;

	p = q = head;
	while (p && q)
	{
		p = p->next;
		q = q->next->next;
		if (p == q)
			return (1);
	}
	return (0);
}

/**
 * print_listint_safe - function to print list
 * @head: pointer to head of list
 * Return: no of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	int loop, i;
	int count = 0;
	size_t nodes = 0;
	const listint_t *tmp;

	if (head == NULL)
		return (nodes);

	loop = isLoop(head);

	if (loop == 1)
	{
		count = count_nodes_before_loop(head);
		for (i = 0; i < count; i++)
		{
			printf("[%p] %d\n", (void *)tmp, tmp->n);
			nodes += 1;
			tmp = tmp->next;
		}

		printf("-> [%p] %d\n", (void *)tmp, tmp->n);
	}
	else if (loop == 0)
	{
		tmp = head;
		while (tmp != NULL)
		{
			printf("[%p] %d\n", (void *)tmp, tmp->n);
			nodes += 1;
			tmp = tmp->next;
		}
	}
	return (nodes);
}
