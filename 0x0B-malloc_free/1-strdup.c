#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - check length of string
 * @str: pointer type char
 * Return: length of the string
 */
int _strlen(char *str)
{
int i;

for (i = 0; str[i] != 00; i++)
{
}
return (i);
}
/**
 * _strdup - copy a string
 * @str: pointer char type
 * Return: string copied
 */
char *_strdup(char *str)
{
char *a;
int m, n;

if (str == NULL)
{
return (NULL);
}
else
{
m = _strlen(str);
n = (char *)malloc(m * sizeof(char) + 1);
if (a == NULL)
{
return (0);
}
for (n = 0; str[n] != '\0'; n++)
{
a[n] = str[n];
}
return (a);
}
free(a);
}
