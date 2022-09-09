#include <stdio.h>
/**
  * main - Print all numbers of base 16
  *
  * Return: always 0 - success
  */

int main(void)

{

	int n = '0';
	char m = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}

	while (m <= 'f')
	{
		putchar(m);
		m++;
	}

	putchar('\n');

	return (0);
}
