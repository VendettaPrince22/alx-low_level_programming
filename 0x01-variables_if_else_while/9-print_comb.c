#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	c = 48;
	while (c <= 57)
	{
		putchar(c);
		if (!(c == 57))
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');

	return (0);
}
