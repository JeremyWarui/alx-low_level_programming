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

    if (*head == NULL)
        return (-1);

    if (index != 0)
    {
        prev = *head;
        for (i = 0; i < (index - 1); i++)
        {
            if (prev->next != NULL)
                    prev = prev->next;
        }

        temp = *head;
        for (i = 0; i < (index); i++)
        {
            if (temp->next != NULL)
                temp = temp->next;
        }

        prev->next = temp->next;
        free(temp);
        return (1);
    }

    else
    {
        temp = *head;
        free(*head);
        *head = temp->next;
        return (1);
    }
}
