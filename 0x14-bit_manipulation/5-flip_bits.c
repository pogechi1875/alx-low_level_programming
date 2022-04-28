#include <stdio.h>
#include "main.h"

/**
* flip_bits - Number of bits to flip to get from one number to another.
* @n: Unsigned long int
* @m: Unsigned ing
* Return: The number of bits.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int len, count, j;

	len = 63;
	count = 0;
	j = 0;

while (len >= count)
{
	if ((m & 1) != (n & 1))
	{
		j++;
	}
	n >>= 1;
	m >>= 1;
	count++;
}
	return (j);
}
