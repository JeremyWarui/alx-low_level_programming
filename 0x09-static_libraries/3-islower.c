#include "main.h"

/**
  * _islower - check if letter is in lowercase
  * @c: interger as parameter
  * Return: 1 is successfull
  * return 0 if not lowercase
  */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	return (0);
}

