#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of a dll
 * @head: pointer to head of dll
 * @index: the index of a node in head; starts from 0
 *
 * Return: node if it exists, NULL if it doesn't
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	dlistint_t *index_node;
	unsigned int n;

	current = head;
	n = 0;
	while (n < index)
	{
		current = current->next;
		n++;
	}
	index_node = current;

	return (index_node);
}
