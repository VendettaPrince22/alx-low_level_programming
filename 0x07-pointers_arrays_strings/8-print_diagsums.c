#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: array of arrays containing integers
 * @size: size of the array
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum1;
	int sum2;

	i = 0;
	j = 0;
	sum1 = 0;
	while (i < (size * size))
	{
		if (i == j)
		{
			sum1 += a[i];
			j += size + 1;
		}
		i++;
	}

	i = 0;
	j = size - 1;
	sum2 = 0;
	while (i < (size * size) - 1)
	{
		if (i == j)
		{
			sum2 += a[i];
			j += size - 1;
		}
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
