#include "main.h"
/**
 * *_memset - replace characters of an array
 * @s: array
 * @b: size
 * @n: delimiter
 * Return: array placed
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; s != 00 && i < n; i++)
{
s[i] = b;
}
return (s);
}
