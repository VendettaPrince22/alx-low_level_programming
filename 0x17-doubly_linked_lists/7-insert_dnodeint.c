#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position in a dll
 * @h: pointer to pointer to head of a dll
 * @idx: index where new node should be added, starts at 0
 * @n: node data
 *
 * Return: address of new node, NULL if it failed
 * If its not possible to add the new node at idx,
 * do not add the new node and return NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *current;
	dlistint_t *prev_node;
	dlistint_t *next_node;
	unsigned int a, b;
	int x;

	/* Check if idx is negative */
	x = (int)idx;
	if (x < 0)
	{
		return (NULL);
	}

	/** Create a new node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;

	/* Creates a new head if not defined */
	if (*h == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*h = new;
	}

	current = *h;

	/* Get prev_node */
	a = 0;
	while (current != NULL && a < idx - 1)
	{
		a++;
		current = current->next;
	}
	/* Check if idx is greater than number of nodes */
	if (current == NULL)
	{
		return  (NULL);
	}
	prev_node = current;

	/* Get next node */
	b = 0;
	current = *h;
	while (current != NULL && b <= idx - 1)
	{
		b++;
		current = current->next;
	}
	if (current == NULL)
	{
		return (NULL);
	}
	next_node = current;

	/** set new prev */
	new->prev = prev_node;
	prev_node->next = new;

	/* set new next */
	new->next = next_node;
	next_node->prev = new;

	return (new);
}
