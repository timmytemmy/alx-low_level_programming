#include "lists.h"

/**
 * print_listint - prints all elements in a list.
 * @h: head.
 * Return: Numbers.
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
