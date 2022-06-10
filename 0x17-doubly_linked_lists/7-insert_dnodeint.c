#include "lists.h"
/**
 * insert_dnodeint_at_index - function to insert node at index
 * @h: double ptr to the beginning of the list
 * @idx: index of insert new node
 * @n: data to store
 * Return: address of the new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *b, *temp;
	unsigned int i;

	if (h == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	temp = *h;
	i = 0;

	while (temp != NULL && i < idx)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL && i == idx)
	{
		return (add_dnodeint_end(h, n));
	}
	else if (temp != NULL)
	{
		b = malloc(sizeof(dlistint_t));

		if (b == NULL)
		{
			return (NULL);
		}
		b->n = n;
		temp->prev->next = b;
		b->prev = temp->prev;
		temp->prev = b;
		b->next = temp;
		return (b);
	}
	return (NULL);
}
