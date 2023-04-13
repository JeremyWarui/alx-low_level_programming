#include "search_algos.h"
#include <math.h>

/**
  * jump_search - function that performs jump search on searching for a value
  * @array: the array to find the value
  * @size: length of the array
  * @value: target to search from the array
  */

int jump_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t x = 0;
	size_t step = sqrt(size);

	if (size == 0 || array == NULL)
		return (-1);

	while (array[step] <= value && step < size)
	{
		i = step;
		step = step + sqrt(size);
		if (step > size - 1)
			return (-1);
	}

	for (x = i; x < step; x++)
		if (array[x] == value)
			return (x);

	return (-1);
}
