#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the 'n' times table
 * @n: the number for which the times table prints
 *
 * If 'n' is greater than 15 or less than 0,
 * the function shouldn't print anything
 */
void print_times_table(int n)
{
	int count;
	int num;
	int row;

	if (!(n > 15 || n <= 0))
	{
		count = 0;
		while (count <= n)
		{
			num = 1;
			row = 0;
			printf("%d, ", row);
			while (num < n)
			{
				row += count;
				printf("%3d, ", row);
				num++;
			}
			printf("%3d\n", row + count);
			count++;
		}
	} else if (n == 0)
	{
		printf("%d\n", 0);
	}
}
