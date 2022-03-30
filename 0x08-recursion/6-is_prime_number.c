#include "main.h"

/**
 * prime_help - helper function for is_prime_number
 *
 * @n: number to check for primality
 * @x: counter for prime check value
 * Return: returns itself when not finished, when finished returns 1 for prime,
 * or 0 for not
 */
int prime_help(int n, int x)
{
	if (n % x == 0)
		return (0);
	if (x > (n / 2))
		return (1);
	return (prime_help(n, ++x));
}

/**
 * is_prime_number - determines if a number is prime
 *
 * @n: number to check
 * Return: returns 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	if (n % 2 == 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime_help(n, 3));
}
