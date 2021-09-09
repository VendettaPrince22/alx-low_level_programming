#include "main.h"
/**
 * *string_to_upper - convert string to uppercase
 * @s: string to convert
 * Return: the converted to uppercase
 */
char *string_toupper(char *s)
{
int i;

for (i = 0; s[i] != 00; i++)
{
if (s[i] >= 97 && s[i] <= 122)
{
s[i] = s[i] - 32;
}
}
return (s);
}
