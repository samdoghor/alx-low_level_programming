#include "lists.h"

/**
 * print_listint_safe - this function prints a listint_t linked list.
 * @head: it points to the nodes in the linked list to print
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t safe = 0;
	long int lp;

	if (!head || !head->next)
	{
		return (0);
	}

	while (head)
	{
		lp = head - head->next;
		printf("[%p] %d\n", (void *)head, head->n);
		safe++;

		if (lp > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next,
					head->next->n);
			break;
		}

		printf("[%p] %d\n", (void *)head, head->n);
		safe++;

	}

	return (safe);
}

