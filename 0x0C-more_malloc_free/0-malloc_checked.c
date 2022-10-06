#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * malloc_checked - allocate memory
  * @b: integer - size of
  * Return: pointer ot 98 as exit status
  */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);

}
