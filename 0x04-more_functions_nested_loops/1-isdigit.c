#include "main.h"
/**
 * _isdigit - This function tests if input is a number
 * @c: The passed char variable
 * Return: 1 if c is a number, return 0 if not
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
