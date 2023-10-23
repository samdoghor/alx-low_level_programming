#include "lists.h"

/**
 * delete_nodeint_at_index - this function deletes the node
 * at the index of a listint_t linked list.
 * @head: it points to the first node in the linked list
 * @index: position where the node is deleted from
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int counter;
	listint_t *current_node = *head;
	listint_t *previous_node = NULL;

	if (current_node == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current_node);

		return (1);
	}

	for (counter = 0; counter < (index - 1); counter++)
	{
		if (current_node->next == NULL)
			return (-1);

		current_node = current_node->next;
	}

	previous_node = current_node->next;
	current_node->next = previous_node->next;
	free(previous_node);
	return (1);
}

