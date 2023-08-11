#include "lists.h"

/**
 *** free_dlistint - it frees a dlistint_t list
 *** @head: it is the head of the list
 *** Return: it has no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
