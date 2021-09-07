#include "main.h"
#include <stdio.h>
/**
 * print_array - print array of 5 elements
 * @a: int array
 * @n: number of elements
 */
void print_array(int *a, int n)
{
int i = 0;

while (i < n)
{
printf("%d", a[i]);
i++;
if (i != n)
{
printf(",");
}
}
printf("\n");
}
