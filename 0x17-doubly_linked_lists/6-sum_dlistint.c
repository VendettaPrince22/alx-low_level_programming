#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a dll
 * @head: pointer to head of dll
 *
 * Return: sum of data, 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	/** Check if list is empty */
	if (head == NULL)
	{
		return (0);
	}

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
