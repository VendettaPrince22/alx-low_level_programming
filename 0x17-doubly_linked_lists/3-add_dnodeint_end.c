#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of dllist
 * @head: pointer to pointer of head of list
 * @n: data to add
 *
 * Return: address of the new element, NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/** Create a new node */
	dlistint_t *new;
	dlistint_t *current;

	new = malloc(sizeof(dlistint_t));

	new->n = n;

	/** Check if DLL is empty */
	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
	}
	else
	{
		/** Get the last node */
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;
		new->prev = current;
	}

	new->next = NULL;

	return (new);
}
