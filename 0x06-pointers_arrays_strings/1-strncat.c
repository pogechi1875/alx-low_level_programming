#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination char
 * @src: source char
 * @n: number of bytes from src
 * Return: new string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int v = 0;

	while (dest[v] != '\0')
	{
		v++;
	}

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[v + i] = src[i];
	dest[v + i] = '\0';

	return (dest);
}
