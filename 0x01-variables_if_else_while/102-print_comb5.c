#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	int d;
	int e;
	int f;

	c = 48;
	while (c <= 57)
	{
		d = 48;
		while (d <= 56)
		{
			e = c;
			while (e <= 57)
			{
				if (e == c)
				{
					f = d + 1;
				}
				else
				{
					f = 48;
				}
				while (f <= 57)
				{
					putchar(c);
					putchar(d);
					putchar(' ');
					putchar(e);
					putchar(f);

					if (!(c == 57 && d == 56 && e == 57 && f == 57))
					{
						putchar(',');
						putchar(' ');
					}
					f++;
				}
				e++;
			}
			d++;
		}
		c++;
	}
	putchar('\n');

	return (0);
}
