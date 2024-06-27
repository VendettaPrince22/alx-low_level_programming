#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory previously allocated
 * @old_size: size in bytes of allocated space for ptr
 * @new_size: new size in bytes of new memory block
 *
 * Return: pointer to new memory block
 * Copies from ptr content to new allocated space memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i;
	char *old_ptr;

	old_ptr = (char *)ptr;
	new_ptr = malloc(new_size);

	i = 0;
	while (i < old_size)
	{
		new_ptr[i] = old_ptr[i];
		i++;
	}

	free(old_ptr);

	return (new_ptr);
}
