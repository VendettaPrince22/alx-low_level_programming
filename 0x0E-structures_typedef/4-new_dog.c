#include <stdlib.h>
#include "dog.h"

char *_strcpy(char *s);

/**
 * new_dog - creates a new dog (data)
 * @name: dog name
 * @age: dog age
 * @owner: dog's owner
 *
 * Return: new dog structure
 * store a copy of name and owner
 * return 'NULL' if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *copy_dog;
	char *new_name;
	char *new_owner;

	new_name = _strcpy(name);
	new_owner = _strcpy(owner);

	copy_dog = malloc(sizeof(dog_t));
	if (copy_dog == NULL)
	{
		return (NULL);
	}

	copy_dog->age = age;
	copy_dog->name = new_name;
	copy_dog->owner = new_owner;

	return (copy_dog);
}

/**
 * _strcpy - returns a copy of a string
 * @s: string to copy
 *
 * Return: new string
 */
char *_strcpy(char *s)
{
	char *new_s;
	int i;

	new_s = malloc(sizeof(*s));
	if (new_s == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (s[i] != '\0')
	{
		new_s[i] = s[i];
		i++;
	}
	new_s[i] = '\0';

	return (new_s);
}
