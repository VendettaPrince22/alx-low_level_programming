#include "main.h"
/**
 * swap_int - swaps value btwn *a and *b
 * @a: integer pointer
 * @b: integer pointer
 */
void swap_int(int *a, int *b)
{
int tmp;

tmp = *a;
*a = *b;
*b = tmp;
}
