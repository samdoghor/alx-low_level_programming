#include "lists.h"

/**
 * sum_listint - this function returns the sum of all the
 * data (n) of a listint_t linked list
 * @head: it points to the first node in the linked list
 * Return: the sum of all the data of a linked list, if empty
 * return 0
 */

int sum_listint(listint_t *head)
{
	int summation = 0;

	listint_t *current_node = head;

	while (current_node)
	{
		summation += current_node->n;
		current_node = current_node->next;
	}

	return (summation);
}

