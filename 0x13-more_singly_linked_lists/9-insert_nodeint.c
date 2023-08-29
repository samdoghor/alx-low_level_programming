#include "lists.h"

/**
 * insert_nodeint_at_index - this function inserts a new node at a position
 * @head: it points to the first node in the linked list
 * @n: defines the data to insert in a new node
 * @index: position where the new node is added
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	unsigned int counter;

	listint_t *new_node;

	listint_t *current_node;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	if (!head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (index == 0)
	{
		new_node->next = *head;

		*head = new_node;

		return (new_node);
	}

	for (counter = 0; current_node && counter < index; counter++)
	{
		if (counter == index - 1)
		{
			new_node->next = current_node->next;
			current_node->next = new_node;
			return (new_node);
		}
		else
			current_node = current_node->next;
	}

	return (NULL);
}
