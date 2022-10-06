#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * array_range - create an array with limits
  * @min: minimun number of integers
  * @max: max number of integers
  * Return: pointer
  */

int *array_range(int min, int max)
{
	int i;
	int len;
	int *new_array;

	len = (max - min) + 1;

	if (min > max)
		return (NULL);

	new_array = malloc(sizeof(*new_array) * len);

	if (new_array == NULL)
	{
		free(new_array);
		return (NULL);
	}

	for (i = 0; i < len; i++, min++)
		new_array[i] = min;

	return (new_array);

}
