#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of nmenb elements of size bytes each
 * using malloc
 * @nmemb: number of elements in the array; if is 0 return NULL
 * @size: element size in bytes; if 0 return NULL
 *
 * Return: pointer to allocated memory
 * On fail, return NULL
 *
 * Memory is set to 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *n;
	unsigned int i;
	char b;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	n = malloc(size * nmemb);
	if (n == NULL)
	{
		return (NULL);
	}

	i = 0;
	b = 0;
	while (i < size * nmemb)
	{
		n[i] = b;
		i++;
	}

	return (n);
}
