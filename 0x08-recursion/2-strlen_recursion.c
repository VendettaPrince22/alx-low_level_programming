#include "main.h"
/**
 * _strlen_recursion - will check and print length of a string
 * @s: passed char
 * Return: void
 */
int _strlen_recursion(char *s)
{
if (*s != 00)
{
s = s + 1;
return ((_strlen_recursion(s)) + 1);
}
return (0);
}
