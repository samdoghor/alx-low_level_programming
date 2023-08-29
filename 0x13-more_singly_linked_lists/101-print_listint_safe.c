#include "lists.h"

/**
 * print_listint_safe - this function prints a listint_t linked list.
 * @head: it points to the nodes in the linked list to print
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t safe = 0;
	long int difference;

	while (head)
	{
		difference = (size_t)(head) - (size_t)(head->next);
		safe++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (difference > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next,
					head->next->n);
			break;
		}
	}
	return (safe);
}
