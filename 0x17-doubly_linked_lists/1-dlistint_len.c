#include "lists.h"
/**
 * dlistint_len - function to find the length of a double linked list
 * @h: pointer to the head of the list
 * Return: length
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len;

	for (len  = 0; h != NULL; ++len)
	{
		h = h->next;
	}
	return (len);
}
