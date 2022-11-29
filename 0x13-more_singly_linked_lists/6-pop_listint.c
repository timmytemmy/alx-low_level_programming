#include "lists.h"

/**
 * pop_listint - deletes the head of a linked list.
 * @head: head of a list.
 * Return: element of head node.
 */

int pop_listint(listint_t **head)
{
	int headnode;
	listint_t *h;
	listint_t *current;

	if (*head == NULL)
		return (0);

	current = *head;

	headnode = current->n;

	h = current->next;

	free(current);

	*head = h;

	return (headnode);
}
