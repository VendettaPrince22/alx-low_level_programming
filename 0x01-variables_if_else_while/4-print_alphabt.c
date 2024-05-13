#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except q and e to stdout
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 97;
	while (c <= 122)
	{
		if (!(c == 113 || c == 101))
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');

	return (0);
}
