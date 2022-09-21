#include "main.h"

/**
  * _strcat - Concatenate two strings
  * @dest: destination pointer
  * @src: source pointer
  * Return: concatenated string
  */

char *_strcat(char *dest, char *src)
{
	while (*dest)
		dest++;
	while ((*dest = *src))
		dest++, src++;

	return (dest);
}
