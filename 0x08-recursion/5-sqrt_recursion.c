#include "main.h"
/**
 * function - checks if number is natural square root
 * @a: passed number
 * @b: 1
 * Return: -1 if b*b > a, return b if b*b = a, check again
 */
int function(int b, int a)
{
if ((b * b) > a)
{
return (-1);
}
if ((b * b) == a)
{
return (b);
}
else
{
return (function(b + 1, a));
}
}
/**
 * _sqrt_recursion - recursive function
 * @n: passed number
 * Return: sds
 */
int _sqrt_recursion(int n)
{
if (n >= 1)
{
return (function(1, n));
}
else
{
return (-1);
}
}
