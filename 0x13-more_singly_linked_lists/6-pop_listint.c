#include "lists.h"

/**
 * pop_listint - this function deletes the head node of a
 * listint_t linked list
 * @head: it points to the first node in the linked list
 * Return: the data in the linked list that was deleted or it
 * returns 0 when list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *current_node;

	int elements;

	if (!head)
		return (0);
	if (!*head)
		return (0);

	elements = (*head)->n;

	current_node = (*head)->next;

	free(*head);

	*head = current_node;

	return (elements);
}


