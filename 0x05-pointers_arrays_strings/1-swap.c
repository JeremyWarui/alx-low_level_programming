#include "main.h"

/**
  * swap_int - Swap the values
  * @a: first pointer
  * @b: second pointer
  * Return: void
  */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
