#include <stdio.h>

/**
  * main - Print the alphabets in both small and caps cases
  *
  * Return: always 0 (success)
  */

int main(void)
{
	char lwr = 'a';
	char upp = 'A';

	while (lwr <= 'z')
	{
		putchar(lwr);
		lwr++;
	}

	while (upp <= 'Z')
	{
		putchar(upp);
		upp++;
	}
	putchar('\n');

	return (0);
}

