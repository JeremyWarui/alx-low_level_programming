#include <unistd.h>

/**
* _putchar - writes the character and outputs to stdout
* @a: character to output
*
* Return: on success 1 on error -1
*/

int _putchar(char a)
{
	return (write(1, &a, 1));

}


