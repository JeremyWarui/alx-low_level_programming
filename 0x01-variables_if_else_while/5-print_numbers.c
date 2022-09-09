#include <stdio.h>

/**
  * main - Print single numbers of base 10
  *
  * Return: success - always 0
  */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}

	putchar('\n');

	return (0);
}
