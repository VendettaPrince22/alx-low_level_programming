#include "main.h"
/**
 * more_numbers - num 0-14
 * Return: void
 */
void more_numbers(void)
{
int num;
int i;

for (i = 0; i < num; i++)
{
for (num = 0; num <= 14; num++)
{
if (num / 10 != 0)
{
_putchar(num / 10 + '0');
}
_putchar(num % 10 + '0');
}
_putchar('\n');
}
}
