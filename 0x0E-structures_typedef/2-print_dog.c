#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print-dog - prints a 'struct dog' 
 * 
 * @d: struct initializer
 * 
 * If an element of d is 'NULL' print (nil)
 * If d is NULL print nothing
 */
void print_dog(struct dog *d)
{
    /*Check if d is NULL*/
    if (!(d == NULL))
    {
        /*char *s_age;*/

        /*s_age = malloc(sizeof(int));*/
       /*Check if name member has a value*/
        if (d->name == NULL)
        {
            d->name = "(nil)";
        }
    
        /*Check if owner member has a value*/
        if (d->owner == NULL)
        {
        d->owner = "(nil)";
        }

        printf("Name: %s\n", d->name);
        /*Check if age member has a value*/
        /*
        s_age = "";
        sprintf(s_age, "%f", d->age);
        if (s_age == NULL)
        {
            printf("Age: %s\n", "(nil)");
        }
        */
        printf("Age: %f\n", d->age);
        
        printf("Owner: %s\n", d->owner);

        /*free(s_age);*/
    }   
}