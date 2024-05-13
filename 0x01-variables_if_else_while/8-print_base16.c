#include <stdio.h>

/**
 * main - prints all the numbersof base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 48;
	while (c <= 57)
	{
		putchar(c);
		c++;
	}

	c = 97;
	while (c <= 102)
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
