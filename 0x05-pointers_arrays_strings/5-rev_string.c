#include "main.h"

/**
  * rev_string  - Reverse string
  * @s: pointer of string
  * Return: void
  */

void rev_string(char *s)
{
	/*get current address/pointers */

	int first, last, len;
	char str;

	for (len = 0; *s != '\0'; len++)
	{
		s++;
	}

	for (first = 0, last = len - 1; first < last; first++, last--)
	{
		str = s[first];
		s[first] = s[last];
		s[last] = str;
	}

}
