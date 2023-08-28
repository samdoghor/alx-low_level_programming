#include "lists.h"

/**
 * add_nodeint - this function adds a new node at
 * the beginning of a linked list
 * @head: it points to the first node in the linked list
 * @n: defines the data to insert in a new node
 * Return: points to a new node, or points to NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)

		return (NULL);

	new_node->n = n;

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
