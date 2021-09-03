#include "main.h"
/**
 * print_diagonal - function will print \ n times
 * @n: times
 * Return: void
 */
void print_diagonal(int n)
{
int i;
int j;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; j++)
{
for (j = 0; j <= i; j++)
{
if (j != i)
{
_putchat(32);
}
else
{
_putchar(92);
}
}
_putchar('\n');
}
}
}
