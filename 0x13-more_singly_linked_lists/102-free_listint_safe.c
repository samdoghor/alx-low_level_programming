#include "lists.h"

/**
 * free_listint_safe - this function frees a listint_t list
 * @h: it points to the first node in the linked list
 * Return: the size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;
	listint_t *node_temp;
	listint_t *current_node = *h;

	while (current_node != NULL)
	{
		node_temp = current_node;
		current_node = current_node->next;
		free(node_temp);
		counter++;

		if (node_temp <= current_node)
		{
			*h = NULL;
			break;
		}
	}

	*h = NULL;

	return (counter);
}

