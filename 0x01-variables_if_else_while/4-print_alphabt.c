#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
char var;

for (var = 97; var <= 122; var++)
{
if (!(var == 101 || var == 113))
{
putchar(var);
}
}
putchar('\n');
return (0);
}
