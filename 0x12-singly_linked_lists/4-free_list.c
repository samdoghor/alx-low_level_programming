#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

/* Samuel Doghor */

void free_list(list_t *head)
{
	list_t *curr;

	while ((curr = head) != NULL)
	{
		head = head->next;

		if (curr->str != NULL)
			free(curr->str);

		free(curr);
	}
}
