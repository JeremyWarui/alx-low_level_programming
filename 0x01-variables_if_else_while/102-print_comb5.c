#include <stdio.h>

/**
  * main - print two pairs of digits
  *
  * Return: zero
  */

int main(void)
{
	int ten, one, i, j;

	/* first pair */
	for (ten = '0'; ten <= '9'; ten++)
	{
		for (one = '0'; one <= '9'; one++)
		{
			/* second pair */
			for (i = ten; i <= '9'; i++)
			{
				for (j = one + 1; j <= '9'; j++)
				{
					putchar(ten);
					putchar(one);
					putchar(' ');
					putchar(i);
					putchar(j);

					if (!((ten == '9' && one == '8') && (i == '9' && j == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				j = '0';
			}
		}
	}

	putchar('\n');

	return (0);

}
