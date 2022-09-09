#include <stdio.h>

/**
  * main - print a cmbo of two digits
  *
  * Return: always 0
  */

int main(void)

{
	int i, b;

	for (i = '0'; i < '9'; i++)
	{
		for (b = (i + 1); b < '9'; b++)
		{
			putchar(i);
			putchar(b);

			if (i != '8' || b != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
