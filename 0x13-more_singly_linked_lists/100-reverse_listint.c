#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list
 * @head: it points to the first node in the linked list
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_node = NULL;
	listint_t *previous_node = NULL;

	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = previous_node;
		previous_node = *head;
		*head = next_node;
	}

	*head = previous_node;

	return (*head);
}

