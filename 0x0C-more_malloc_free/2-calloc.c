#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * 
 * @nmemb: number of elements in the array; if is 0 return NULL
 * @size: element size in bytes; if 0 return NULL
 *  
 * Return: void*
 * On fail, return NULL
 * 
 * Memory is set to 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    /*Check if nmemb or size is 0*/
    if (nmemb == 0)
    {
        return NULL;
    }
    if (size == 0)
    {
        return NULL;
    }

    return (malloc(nmemb * size));
}