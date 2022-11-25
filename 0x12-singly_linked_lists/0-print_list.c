#include "lists.h"
#include <string.h>

/**
 * print_list - prints all elements of a list_t list.
 * @h: list_t.
 * Return: Number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t num;

	num = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		num++;
	}
	return (num);
}
