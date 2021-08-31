#include <stdio.h>
/**
 * main - prints the string "Holberton" from a character array.
 * Return: 0 on success.
 */
int main(void)
{
char c[] = "Holberton";
int var;

for (var = 0; var <= 8; var++)
{
putchar(c[var]);
}
putchar('\n');
return (0);
}
