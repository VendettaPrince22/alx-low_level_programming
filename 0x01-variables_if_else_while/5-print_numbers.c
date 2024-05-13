#include <stdio.h>

/**
 * main - print all single digit numbers of base 10 starting with 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	c = 0;
	while (c < 10)
	{
		printf("%d", c);
		c++;
	}
	putchar('\n');

	return (0);
}
