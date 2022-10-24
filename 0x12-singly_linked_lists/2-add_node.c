#include "lists.h"

/**
 * add_node - add node to beginning of linked list
 * @head: linked list
 * @str: data for new node
 * Return: address of new element, or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
