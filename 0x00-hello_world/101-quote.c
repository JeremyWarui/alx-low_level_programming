#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
  * main - Print a string to the standard error (2)
  *
  * Return: return 1 the value of standard output
  */

int main(void)
{

	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	/*
	 * write(STDOUT_FILENO, "hello world", strlen("hello world"));
	 */

	write(2, str, strlen(str));

	return (1);
}
