#include "lists.h"

/**
 * sum_dlistint - returns the sum of all
 * data(n)  of a dlistint_t linked list.
 *
 * @head: Head of the list.
 * Return: sum of the data,
 * 0 If list is empty.
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
