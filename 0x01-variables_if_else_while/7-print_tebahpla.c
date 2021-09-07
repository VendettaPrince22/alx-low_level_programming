#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
char mander = 122;
while (mander >= 97)
{
putchar(mander);
mander--;
}
putchar('\n');
return (0);
}
