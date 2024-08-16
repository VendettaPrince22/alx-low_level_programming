#include <stdio.h>

/**
 * main - Prints the first 50 fibonacci numbers starting with 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;
	int next;
	int count;

	i = 1;
	j = 2;
	printf("%d, %d, ", i, j);

	count = 3;
	while (count < 50 - 1)
	{
		next = i + j;
		printf("%d, ", next);
		i = j;
		j = next;
		count++;
	}
	printf("%d\n", i + j);

	return (0);
}
