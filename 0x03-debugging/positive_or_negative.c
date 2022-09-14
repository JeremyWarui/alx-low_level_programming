#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * positive_or_negative - Checks whether a value is negative or positive
  * @i: integer to check
  * Return: always 0 (Success)
  */

void positive_or_negative(int i)

{


	i = 0;

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}


}
