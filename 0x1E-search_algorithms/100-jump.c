#include "search_algos.h"
#include <math.h>

/**
  * jump_search - function that performs jump search on searching for a value
  * @array: the array to find the value
  * @size: length of the array
  * @value: target to search from the array
  * Return: index of the value in the array or -1 if not found
  */

int jump_search(int *array, size_t size, int value)
{
	size_t i, prev, next, x, step;

	i = prev = next = x = step = 0;
	if (size == 0 || array == NULL)
		return (-1);

	while (array[step] < value && step < size)
	{
		printf("Value checked array[%lu] = [%d]\n", step, array[step]);
		prev = i;
		i = step;
		next = prev + sqrt(size);
		step += sqrt(size);
		if (next > size - 1)
			return (-1);
	}
	if (step > size)
	{
		printf("Value found between indexes [%lu] and [%lu]\n", next, step);
		for (x = next; x < size; x++)
		{
			printf("Value checked array[%lu] = [%d]\n", x, array[x]);
			if (array[x] == value)
				return (x);
		}

	}
	else
	{
		printf("Value found between indexes [%lu] and [%lu]\n", i, step);
		for (x = i; x < size; x++)
		{
			printf("Value checked array[%lu] = [%d]\n", x, array[x]);
			if (array[x] == value)
				return (x);
		}
	}
	return (-1);
}
