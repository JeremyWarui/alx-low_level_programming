#include <stdio.h>

/**
  * main - print three digits
  *
  * Return: always 0
  */

int main(void)
{
	int hun, ten, one;

	for (hun = '0'; hun <= '9'; hun++) /* outer nos */
	{
		for (ten = (hun + 1); ten <= '9'; ten++) /* middle */
		{
			for (one = (ten + 1); one <= '9'; one++)
			{
				putchar(hun);
				putchar(ten);
				putchar(one);

				if (hun != '7' || ten != '8' || one != '9')
				{
					putchar(',');
					putchar(' ');
				}

			}
		}
	}
	putchar('\n');
	return (0);
}

