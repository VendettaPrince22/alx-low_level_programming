#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a dll
 * @head: pointer to head of dll
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	current = head;
	/** loop through all nodes while freeing them */
	while (current != NULL)
	{
		current = current->next;
		free(current);
	}
	free(head);
}
