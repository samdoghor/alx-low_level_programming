#include "lists.h"

/**
 * get_nodeint_at_index - this function get the nth
 * node of a listint_t linked list
 * @head: points to the first node in the linked list
 * @index: the index of the node to return, starting at 0
 * Return: points to the node being searched or return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter;

	listint_t *current_node = head;

	for (counter = 0; counter < index; counter++)
	{
		if (current_node == NULL)
			return (NULL);

		current_node = current_node->next;
	}

	return (current_node);
}

