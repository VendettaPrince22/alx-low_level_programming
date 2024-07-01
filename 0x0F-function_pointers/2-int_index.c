#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: array where search is initiated
 * @size: size of the array / number of elements in the array
 * @cmp: function pointer for comparing values
 *
 * Return: index of the first element for which
 * the cmp function does not return 0
 * If no element matches or size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;
	int bool;

	if (array == NULL || cmp == NULL)
	{
		return;
	}

	if (size <= 0)
	{
		return (-1);
	}

	index = 0;
	while (index < size)
	{
		bool = cmp(array[index]);
		/*When the function returns true, get its index*/
		if (bool != 0)
		{
			break;
		}
		/*When no element matches, returns error*/
		if (index == size - 1 && bool == 0)
		{
			return (-1);
		}
		index++;
	}

	return (index);
}
