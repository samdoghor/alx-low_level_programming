#include "lists.h"

/**
 * add_nodeint_end - adding a new node at the end of a linked list
 * @head: it points to the first node in the linked list
 * @n: defines the data to insert in a new node
 * Return: points to a new node, or points to NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;

	listint_t *current_node = *head;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)

		return (NULL);

	new_node->n = n;

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;

		return (new_node);
	}

	while (current_node->next)

		current_node = current_node->next;

	current_node->next = new_node;

	return (new_node);
}

