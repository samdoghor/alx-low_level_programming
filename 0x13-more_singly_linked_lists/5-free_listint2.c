#include "lists.h"

/**
 * free_listint2 - frees a linked list and sets the head to NULL
 * @head: points to the listint_t list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if (!head)
		return;

	while (*head)
	{
		current_node = (*head)->next;

		free(*head);

		*head = current_node;
	}

	*head = NULL;
}

