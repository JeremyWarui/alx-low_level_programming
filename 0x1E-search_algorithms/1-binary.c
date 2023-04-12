#include "search_algos.h"

/**
* print_array - print array elements
* @array: the array to traverse
* @s: the start index of array
* @l: last index of array
* Return: print array
*/

void print_array(int *array, size_t s, size_t l)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = s; i <= l; i++)
	{
		if (i != l)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}

/**
* binary_search - searches for a value in a sorted array of integers
* using binary search algo
* @array: the sorted array
* @size: size of the array
* @value: the target to search
* Return: the index of the value or -1
*/

int binary_search(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t mid = 0;
	size_t end = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (start <= end)
	{
		mid = (start + end) / 2;
		print_array(array, start, end);

		if (array[mid] < value)
			start = mid + 1;

		else if (array[mid] > value)
			end = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
