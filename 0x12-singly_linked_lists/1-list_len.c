#include "lists.h"
/**
 * list_len - the function that return the number of elements
 * in a linked list.
 * @h: the pointer that points to the struct.
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int x = 0;

	while (h != 0)
	{
		h = h->next;
		x++;
	}
	return (x);
}
