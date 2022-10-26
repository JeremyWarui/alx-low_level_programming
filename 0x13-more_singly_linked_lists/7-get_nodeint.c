#include "lists.h"

/**
  * get_nodeint_at_index - returns node at index 'index'
  * @index: position of node
  * @head: the linked list
  * Return: found node or NULL
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num;

	if (head == NULL)
		return (NULL);

	for (num = 0; num < index; num++)
		head = head->next;
	return (head);

}
