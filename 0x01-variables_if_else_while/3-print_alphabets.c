#include <stdio.h>

/**
 * main - prints the alphabet in lowercase then in uppercase to stdout
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 97;
	while (c <= 122)
	{
		putchar(c);
		c++;
	}

	c = 65;
	while (c <= 90)
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
