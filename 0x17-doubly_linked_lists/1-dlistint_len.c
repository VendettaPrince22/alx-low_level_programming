#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - number of elements in a linked list
 * @h: pointer to head of dllist
 *
 * Return: number of elements (size_t)
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		h = h->next;
		n++;
	}

	return (n);
}
