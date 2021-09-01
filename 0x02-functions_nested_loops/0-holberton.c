#include "holberton.h"
/**
 * main - prints the string "_putchar" from a character array.
 * Return: 0 on success.
 */
int main(void)
{
char c[] = "_putchar";
int var;

for (var = 0; var <= 7; var++)
{
_putchar(c[var]);
}
return (0);
}
