#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @cmp: pointer to the function that compares
 * @size: size of the array
 * @array: array of elements
 *
 * Return: return the index of the first element of the comparison
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (index = 0 ; index < size ; index++)
	{
		if ((*cmp)(array[index]) != 0)
		{
			return (index);
		}
	}
	return (-1);
}
