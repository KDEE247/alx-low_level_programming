#include "search_algos.h"
/**
  * binary_search - Searches For Value in a Sorted Array
  * of Integers Using Binary Search.
  * @array: Ptr to the 1st Element of the Array to Search.
  * @size: The Number of Elements in the Array.
  * @value: The Value to Search For.
  * Return: If the value is not present or the Array is NULL, -1.
  * Else, the Index Where the Value is Located.
  * Description: Prints the [sub]Array Being Searched After Each Change.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
		right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
