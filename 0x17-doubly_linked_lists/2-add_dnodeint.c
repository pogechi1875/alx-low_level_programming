#include "lists.h"
/**
*add_dnodeint - add node in the beginning.
*@head: double pointer to the head list.
*@n: data to store.
*Return: new pointer.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *b;

	if (head == NULL)
	{
		return (NULL);
	}
	b = malloc(sizeof(dlistint_t));

	if (b == NULL)
	{
		return (NULL);
	}
	b->n = n;
	b->next = *head;
	b->prev = NULL;

	if (*head != NULL)
		(*head)->prev = b;
	*head = b;
	return (b);
}
