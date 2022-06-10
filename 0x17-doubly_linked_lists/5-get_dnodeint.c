#include "lists.h"
/**
 * get_dnodeint_at_index - get the node of the given number
 * @head: pointer to the head of the list
 * @index: index to get the node.
 * Return: head.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int nb;

	if (head == NULL)
	{
		return (NULL);
	}
	for (nb = 0; head != NULL && nb < index; ++nb)
	{
		head = head->next;
	}
	return (head);
}
