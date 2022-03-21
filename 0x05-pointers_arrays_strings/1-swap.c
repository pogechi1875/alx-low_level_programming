#include "main.h"
/**
* swap_int -a function that swaps the values of a and b
* @a: pointer
* @b: pointer
* Return: (0)
*/
void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
