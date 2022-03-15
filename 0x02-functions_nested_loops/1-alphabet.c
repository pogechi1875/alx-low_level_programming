#include "main.h"
/**
 * main - main code
 *
 * return - always(0)
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';
	do {
		_putchar(ch);
		_putchar('\n');
		ch++;
	} while (ch <= 'z');

}
int main(void)
{
	print_alphabet();
	return (0);
}
