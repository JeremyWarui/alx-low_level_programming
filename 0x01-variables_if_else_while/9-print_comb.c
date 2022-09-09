#include <stdio.h>

/**
  * main - Print combo of all possible single digits
  *
  * Return: always zero - success
  */

int main(void)
{
	int n = '0';

	while (n <= '9')

	{
		putchar(n);

		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}

		n++;

	}

	putchar('\n');

	return (0);
}
