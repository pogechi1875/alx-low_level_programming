#include <stdio.h>
#include "main.h"

/**
* set_bit - sets the value of a bit to 1 at a given index
* @n: Unsigned int (pointer)
* @index: The index given
* Return: 1 if works and -1 if an error ocurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
	*n = *n | (1 << index);
		return (1);
	}
return (-1);
}
