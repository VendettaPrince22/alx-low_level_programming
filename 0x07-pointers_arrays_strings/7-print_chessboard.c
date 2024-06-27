#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: array of arrays to print
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;
	char k;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			k = a[i][j];
			_putchar(k);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
