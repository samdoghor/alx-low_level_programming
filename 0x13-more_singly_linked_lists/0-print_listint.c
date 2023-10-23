#include "lists.h"

/**
 * print_listint - this function prints all the elements
 * of a listint_t list
 * @h: linked list of type listint_int to print
 * Return: number of nodes in linked list
 */

size_t print_listint(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		elements++;
	}
	return (elements);
}

