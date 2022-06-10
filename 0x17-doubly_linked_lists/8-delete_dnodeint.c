#include "lists.h"
/**
 * delete_dnodeint_at_index - function to delete node in givin index.
 * @head: pointer to double linked list
 * @index: index position to delete node
 * Return: 1 if succees or -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *flag = *head;

	if (!head)
	{
		return (-1);
	}
	if (head)
	{
		while (index && flag)
		{
			flag = flag->next;
			index--;
		}
		if (index)
		{
			return (-1);
		}
		if (!index && flag)
		{
			if (flag->next)
			{
				flag->next->prev = flag->prev;
			}
			if (flag->prev)
			{
				flag->prev->next = flag->next;
			}
			else
			{
				*head = flag->next;
			}
			free(flag);
			return (1);
		}
	}
	return (-1);
}
