#include <stdio.h>

/**
  * main - Prints 0123456789
  *
  * Return: always 0 - success
  */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}

	putchar('\n');

	return (0);
}
