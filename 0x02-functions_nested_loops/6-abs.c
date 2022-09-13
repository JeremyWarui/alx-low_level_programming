#include "main.h"

/**
* _abs(int) - Prints the absolute value of an integer
* @int: the integerto get absolute value
* Return: 0 for success
*/

int _abs(int c)
{
	if (c > 0) 
	{
		return (c);
	}
	else if (c < 0)
	{
		return (-c);
	}

	return (0);

}
