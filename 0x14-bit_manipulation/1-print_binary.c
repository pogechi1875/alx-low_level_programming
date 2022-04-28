#include <stdio.h>
#include "main.h"

/**
* print_binary - Prints the binary representation of a number
* @n: Unsigned int
* Return: Nothing
*/
void print_binary(unsigned long int n)
{
	if (n < 2)
	{
		_putchar(n + '0');
		return;
	}
	print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
