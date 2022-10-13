#include "function_pointers.h"

/**
  * array_iterator - loops thro the array
  * @array: the array to loop through
  * @size: size of array
  * @action: function to call on each ele
  * Return: void
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
