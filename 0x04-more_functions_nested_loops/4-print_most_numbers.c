#include "main.h"
/**
 * print_most_numbers - print 0 - 9 except 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
int num;

num = 48;
while (num <= 57)
{
if (num != 50 && num != 52)
{
_putchar(num);
}
num++;
}
_putchar('\n');
}
