#include <stdlib.h>
#include <stdio.h>

/**
 * binary_search - Searches for a value in a sorted array of integers
 * @array: pointer to first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index at which the value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int count;
	int mid;
	int low;
	int high;

	if (array == NULL)
		return (-1);

	count = 0;
	low = 0;
	high = size - 1;
	while (low != high)
	{
		printf("Searching in array: ");
		while (count < high)
		{
			printf("%d, ", array[count]);
			count++;
		}
		printf("%d\n", array[count]);

		mid = (low + high) / 2;

		if (array[mid] == value)
			return (mid);
		if (value < array[mid])
		{
			high = mid - 1;
			count = low;
		}
		if (value > array[mid])
		{
			low = mid + 1;
			count = low;
		}
	}
	printf("Searching in array: %d\n", array[count]);

	return (-1);
}
