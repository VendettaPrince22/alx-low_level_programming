#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: minimum integer; included
 * @max: maximum integer; included
 *
 * Return: pointer to new array
 * if min greater than max, return NULL
 * On fail, return NULL
 */
int *array_range(int min, int max)
{
	int *pti;
	int n;
	int i;
	int nums;

	/*Check if max is less than min*/
	if (min > max)
	{
		return (NULL);
	}

	/*Get size of the array / difference between min and max both inclusive*/
	n = (max - min) + 1;
	pti = malloc(n * sizeof(*pti));

	/*Allocate the numbers into the array*/
	for (i = 0, nums = min; i < n; i++, nums++)
	{
		pti[i] = nums;
	}

	/*On fail*/
	if (pti == NULL)
	{
		return (NULL);
	}

	return (pti);
}
