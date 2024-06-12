#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at the index of a dll
 * @head: pointer to pointer of head of a dll
 * @index: index of the node to be deleted; starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	dlistint_t *prev_node;
	dlistint_t *next_node;
	unsigned int i;

	/*Check if list is empty*/
	if (*head == NULL)
	{
		return (-1);
	}

	current = *head;

	/*If position is 0, use deletion at the beginning*/
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}

	/*If position is size of list, use deletion at the end*/
	/*Traverse to the node to delete*/
	i = 0;
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
	{
		return (-1);
	}

	/*If node is first node, adjust head*/
	/*If not first node, adjust prev_node->next and next_node->prev (if node->next is not NULL)*/
	if (current->next != NULL)
	{
		next_node = current->next;
		next_node->prev = current->prev;
	}

	if (current->prev != NULL)
	{
		prev_node = current->prev;
		prev_node->next = current->next;
	}

	/*Free the node to be deleted*/
	free(current);

	return (1);
}
