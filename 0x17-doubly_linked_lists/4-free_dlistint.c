#include "lists.h"
/**
 * free_dlistint - free a double linked list.
 * @head: ptr to the first node.
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *freel;

	while (head != NULL)
	{
		freel = head->next;
		free(head);
		head = freel;
	}
}
