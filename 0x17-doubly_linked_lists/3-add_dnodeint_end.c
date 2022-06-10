#include "lists.h"
/**
 *add_dnodeint_end- add node at the end of a double linked list
 *@head: pointer to head of a Double Linked list
 *@n: data to store in a Linked list
 *Return: adresse of new pointer.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *b, *temp;

	if (head == NULL)
	{
		return (NULL);
	}

	b = malloc(sizeof(dlistint_t));
	if (b == NULL)
	{
		return (NULL);
	}
	b->next = NULL;
	b->n = n;
	if (*head == NULL)
	{
		b->prev = NULL;
		*head = b;
		return (b);
	}

	temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		b->prev = temp;
		temp->next = b;
	return (b);
}
