#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
int number;
for (number = 48; number < 58; number++)
{
putchar(number);
if (number < 57)
{
putchar(',');
putchar(32);
}
}
putchar('\n');
return (0);
}
