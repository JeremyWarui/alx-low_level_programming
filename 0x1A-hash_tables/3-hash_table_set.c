#include "hash_tables.h"

/**
 * add_hash_node - add new node to hash table
 * @head: head node
 * @key: key for the nodes
 * @value: value to the node
 * Return: pointer to the head
 */

hash_node_t *add_hash_node(hash_node_t **head, char *key, char *value)
{
	hash_node_t *tmp;

	tmp = *head;
	/* check if head is not null */
	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = value;
			return (*head);
		}
		tmp = tmp->next;
	}
	/* if head is null create tmp */
	tmp = malloc(sizeof(hash_node_t));
	if (tmp == NULL)
		return (NULL);
	tmp->key = strdup(key);
	tmp->value = strdup(value);
	tmp->next = *head;
	*head = tmp;
	return (*head);
}

