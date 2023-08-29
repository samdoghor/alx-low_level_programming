#include "lists.h"

/**
 * find_listint_loop - the function finds the loop in a linked list
 * @head: it points to the first node in the linked list
 * Return: the address of the node where the loop starts,
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *snail = head;
	listint_t *cheetah = head;

	if (!head)
		return (NULL);

	while (snail && cheetah && cheetah->next)
	{
		cheetah = cheetah->next->next;
		snail = snail->next;

		if (cheetah == snail)
		{
			snail = head;

			while (snail != cheetah)
			{
				snail = snail->next;
				cheetah = cheetah->next;
			}

			return (cheetah);

		}
	}

	return (NULL);

}
