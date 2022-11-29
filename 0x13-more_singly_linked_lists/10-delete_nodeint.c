#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node wherever in a linked list.
 * @head: head of list.
 * @index: index.
 * Return: Always 0.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *previous;
	listint_t *next;

	previous = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && previous != NULL; i++)
		{
			previous = previous->next;
		}
	}

	if (previous == NULL || (previous->next == NULL && index != 0))
	{
		return (-1);
	}

	next = previous->next;

	if (index != 0)
	{
		prev->next = nex->next;
		free(next);
	}
	else
	{
		free(previous);
		*head = next;
	}

	return (1);
}
