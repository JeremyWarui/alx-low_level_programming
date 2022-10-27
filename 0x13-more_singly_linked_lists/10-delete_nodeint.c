#include "lists.h"

/**
* delete_nodeint_at_index - deletes a node at a given index
* @head: the linked list
* @index: position to delete the node
* Return: -1 if failed or 1 if successful
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i;

	prev = *head;
	if (index != 0)
	{
		for (i = 0; i < (index - 1) && prev != NULL; i++)
			prev = prev->next;
	}
	if (prev == NULL || (prev->next == NULL && index != 0))
		return (-1);
	temp = prev->next;
	if (index != 0)
	{
		prev->next = temp->next;
		free(temp);
	}
	else
	{
		free(prev);
		*head = prev->next;
	}
	return (1);
}
