#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog (data)
 * 
 * @name: dog name
 * @age: dog age
 * @owner: dog's owner 
 * 
 * store a copy of @name and @owner
 * return 'NULL' if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *copy_dog;
    /*Copy of name and owner*/
    char copy_name[] = name;
    char copy_owner[] = owner;

    copy_dog = malloc(sizeof(dog_t));
    /*Check if function fails*/
    if (copy_dog == NULL)
    {
        return (NULL);
    }

    copy_dog->name = copy_name;
    copy_dog->age = age;
    copy_dog->owner = copy_owner;

    return (copy_dog);
}