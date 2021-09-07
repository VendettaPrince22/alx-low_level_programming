#include "main.h"
/**
 * puts2 - checks if *str is an even number.
 * @str: string is passed
 */
void puts2(char *str)
{
int i;

for (i = 0; str[i] != 00; i++)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar(10);
}
