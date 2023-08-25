#include "lists.h"
/**
 * add_node - always adds a new node at the beginning of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

/* Samuel Doghor */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	size_t x;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (x = 0; str[x]; x++);

	new->len = x;
	new->next = *head;
	*head = new;

	return (*head);
}
