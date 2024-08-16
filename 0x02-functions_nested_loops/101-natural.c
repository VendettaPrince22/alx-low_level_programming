#include <stdio.h>

/**
 * main - computes and prints sum of multiples of 3 or 5 below 1024
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	int sum;

	count = 1;
	sum = 0;
	while (count < 1024)
	{
		if (count % 3 == 0 || count % 5 == 0)
		{
			sum += count;
		}
		count++;
	}
	printf("%d\n", sum);

	return (0);
}
