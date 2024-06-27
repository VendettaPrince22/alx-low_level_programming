#include <stdlib.h>

/**
 * malloc_checked - allocates memory 
 * 
 * @b: size of memory to allocate
 * Return: pointer to the allocated memory
 * On error, normal process termination with status value of 98 
 */
void *malloc_checked(unsigned int b)
{
    void *check;

    check = malloc(b);
    if (check == NULL)
    {
        exit(98);
    }

    return (check);
}
