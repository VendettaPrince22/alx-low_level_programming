#include "main.h"
/**
 * *leet - encode a string into 1337
 * @s: string
 * Return: string encoded
 */
char *leet(char *s)
{
int i, j;
char src[] = "aAeE0OlLtT";
char encode[] = "4433001177";

for (i = 0; s[i] != 00; i++)
{
for (j = 0; src[j] != 00; j++)
{
if (s[i] == src[j])
{
s[i] = encode[j];
}
}
}
return (s);
}
