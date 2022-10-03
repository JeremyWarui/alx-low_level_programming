#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * create_array - creates an array
  * @size: size of array
  * @c: character to initialize
  * Return: Null or pointer
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *list;

	if (size == 0)
		return (NULL);

	list = malloc(sizeof(int) * size);

	if (list == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		list[i] = c;

	list[i] = '\0';

	return (list);

}
