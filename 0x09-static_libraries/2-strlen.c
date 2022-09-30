#include "main.h"

/**
  * _strlen - print length of string
  * @s: the string param
  * Return: integer
  */

int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; len++)
	{
		s++;
	}

	return (len);
}
