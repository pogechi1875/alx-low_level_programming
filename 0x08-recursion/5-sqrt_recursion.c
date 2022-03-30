#include "main.h"
/**
 * sqrt_help - function to help sqrt
 * @n: number to square
 * @x: counter for finding square
 * Return: returns square or int recursively
 */
int sqrt_help(int n, int x)
{
	int sum;

	sum = x * x;
	if (n - sum == 0)
		return (x);
	else if (n < sum)
		return (-1);
	return (sqrt_help(n, ++x));
}

/**
 * _sqrt_recursion - recursive sqrt for natural sqrs
 * @n: number to square
 * Return: returns -1 if no natural square, otherwise returns square
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (sqrt_help(n, 2));
}
