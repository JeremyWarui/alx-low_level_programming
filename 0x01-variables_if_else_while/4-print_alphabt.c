#include <stdio.h>

/**
  * main - Print all letters apart from q and e
  *
  * Return: always 0 (success)
  */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'q' || letter == 'e')
		{
			letter++;
			continue;
		}
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}

