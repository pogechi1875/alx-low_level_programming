#include <stdio.h>

/**
* main - main code
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar(digit + '0');
	}

	putchar('\n');

	return (0);
}
