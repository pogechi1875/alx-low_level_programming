#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses array
 * @a: array of integers
 * @n: number of elements in array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int h = n / 2;
	int l, r, i;

	n -= 1;

	for (i = 0; i < h; i++)
	{
		l = a[n - i];
		r = a[i];
		a[i] = l;
		a[n - i] = r;
	}
}
