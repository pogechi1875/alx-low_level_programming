#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int x, y, max;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	max = x;
	y = max / 2;
	while (y <= max)
	{
		_putchar(str[y]);
		y++;
	}
	_putchar('\n');
}
