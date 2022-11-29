#include "list.h"

/**
 * sum_listint - sums elements in a linked list
 * @head: head of a list.
 * Return: Always 0.
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
