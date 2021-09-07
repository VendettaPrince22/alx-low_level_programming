#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
char var;
char varUPPER;

for (var = 'a'; var <= 'z'; var++)
putchar(var);
for (varUPPER = 'A'; varUPPER <= 'Z'; varUPPER++)
putchar(varUPPER);
putchar('\n');

return (0);
}
