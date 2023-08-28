#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_int to print
 * Return: number of nodes in linked list
 */

size_t print_listint(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		printf("%d\n", h->n);

		elements++;

		h = h->next;
	}

	return (elements);
}
