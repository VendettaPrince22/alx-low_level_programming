#include <stdlib.h>
#include <stdio.h>

/**
 * linear_search - Searches for a value in an array of integers
 * @array: the array to apply search algorithm to
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	int count;

	if (array == NULL)
	{
		return (-1);
	}

	count = 0;
	while (count < size)
	{
		printf("Value checked array[%d] = [%d]\n", count, array[count]);
		if (array[count] == value)
		{
			return (count);
		}
		count++;
	}

	return (-1);
}
