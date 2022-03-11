#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char alphabt;

	for (alphabt = 'a'; alphabt <= 'z'; alphabt++)
	{
	if (alphabt != 'q' && alphabt != 'e')
		putchar(alphabt);
	}
		putchar('\n');

return (0);
}
