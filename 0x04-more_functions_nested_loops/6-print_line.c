#include "main.h"
/**
 * print-line - print line n times
 * @n: times character shoul be printed
 * Return: void
 */
void print_line(int n)
{
int i;

if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar(95);
}
}
_putchar('\n');
}
