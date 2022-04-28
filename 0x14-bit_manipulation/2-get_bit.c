#include <stdio.h>
#include "main.h"

/**
* get_bit - Returns the value of a bit
* @n: Unsigned long int
* @index: Value given
* Return: The value of the bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
	{
	return (-1);
	}
	n >>= index;

	if ((n & 1) == 1)
		return (1);

	return (0);
}
