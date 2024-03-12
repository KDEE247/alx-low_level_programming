#include "search_algos.h"
/**
  * interpolation_search - Searches for a Value in Sorted Array of Integer via
  * Interpolation Search.
  * @array: Ptr to the 1st Element of the Array to Search.
  * @size: The Number of Elements in the Array.
  * @value: The Value to Search for.
  * Return: If the value is not present, or the array is NULL, -1. Else, the
  * 1st Index Where the Value is Located.
  * Description: Prints a value every time it is compared in the array..
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		i = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}

	return (-1);
}
