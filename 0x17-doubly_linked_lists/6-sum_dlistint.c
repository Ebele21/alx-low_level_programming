#include "lists.h"

/**
 ** sum_dlistint - it returns the sum of all the data (n)
 ** it is of a doubly linked list
 ** @head: it is the head of the list
 ** Return: it is the sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
