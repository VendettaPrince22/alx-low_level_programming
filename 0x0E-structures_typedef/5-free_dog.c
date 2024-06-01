#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs (data memory) 
 * 
 * @d: dog struct
 */
void free_dog(dog_t *d)
{
    free(d);
}