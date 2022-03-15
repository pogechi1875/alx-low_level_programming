#include "main.h"
/**
 * print_alphabet funtion - prints alphabets in lower case.
 * Return: Always.
 */
void print_alphabet(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
