#include "main.h"
/**
 * function - checks if number is prime
 * @a: passed number
 * @b: 2
 * Return: 1 if the input is a prime number, otherwise return 0
 */
int function(int b, int a)
{
if (a == b)
{
return (1);
}
else if (a % b == 0)
{
return (0);
}
else
{
return (function(b + 1, a));
}
}
/**
 * is_prime_number - call function to check  if a number is prime
 * @n: passed number
 * Return: 0 if input integer is less than 1
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
else
{
return (function(2, n));
}
}
