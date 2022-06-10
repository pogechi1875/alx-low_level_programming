#include "lists.h"
/**
* print_dlistint - function to display a double linked list.
* @h: pointer to double linked list.
* Return: element of a linked list
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
