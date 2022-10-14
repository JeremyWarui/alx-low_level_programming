#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_numbers - prints all numbers
  * @separator: numbers separator
  * @n: number of numbers to print
  * Return: void
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;
	int number;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		number = va_arg(nums, int);

		if (i != (n - 1) && separator != NULL)
			printf("%d %s", number, separator);
		else
			printf("%d", number);
	}

	printf("\n");

	va_end(nums);

}
