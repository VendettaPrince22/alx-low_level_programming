#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
char numbers = 48;
char letters = 97;
while (numbers <= 57)
{
putchar(numbers);
numbers++;
}
while (letters <= 102)
{
putchar(letters);
letters++;
}
putchar('\n');
return (0);
}
