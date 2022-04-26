#include "lists.h"
/**
 * print_listint - prints all the elements in listint_t
 * @h: pointer to head
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	register size_t iter = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		iter++;
	}
	return (iter);
}
