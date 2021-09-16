#include "main.h"
/**
 * _strlen_recursion - returns length of a string
 * @s: string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
int i = 1;

if (*s == 00)
{
return (0);
}
return (i + _strlen_recursion(s + 1));
}
/**
 * palindrome - verify if a word is a palindrome
 * @s: pointer to a string
 * @len: length of a string
 * Return: function will return 1 if string is a palindrome and 0 if not
 */
int palidrome(char *s, int len)
{
if (*(s + 1) == 00)
{
return (1);
}
if (*s != *(s + len))
{
return (0);
}
return (palindrome(s + 1, len - 2));
}
/**
 * is_palindrome - call palindrome function
 * @s: string
 * Return: palindrome value
 */
int is_palindrome(char *s)
{
unsigned int len = _strlen_recursion(s) - 1;

if (*s == 00)
{
return (1);
}
return (palindrome(s, len));
}
