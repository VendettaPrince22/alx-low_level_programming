#include "main.h"
/**
 * factorial - checks factorial of a passed number
 * @n: passed number
 * Return: factor of n
 */
int factorial(int n)
{
if (n > 0)
{
return (factorial(n - 1) * n);
}
else if (n < 0)
{
return (-1);
}
else
{
return (1);
}
}
