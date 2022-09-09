#include <stdio.h>

/**
  * main - Print letters in reverse
  *
  * Return: always 0 - success
  */

int main(void)
{
	char ltr = 'z';

	while (ltr >= 'a')

	{
		putchar(ltr);
		ltr--;
	}

	putchar('\n');

	return (0);
}
