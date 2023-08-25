#include "lists.h"

/**
 * print_list - This function prints out all the elements of a list_t list.
 * @h: singly linked list.
 *
 * Return: total number of elements in the list.
 */

/* Samuel Doghor */

size_t print_list(const list_t *h)
{
	size_t x;

	x = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;

		x++;
	}

	return (x);
}

