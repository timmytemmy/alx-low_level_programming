#include "lists.h"

/**
 * listint_len - number of elements in a linked list.
 * @h: head.
 * Return: Number pf nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
