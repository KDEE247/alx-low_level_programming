#include "search_algos.h"
/**
  * _binary_search - Searches for a Value in a Sorted Array of Integers Using
  * Binary Search.
  * @array: Ptr to the 1st Element of the Array to Search.
  * @left: The Starting Index of the new[sub]Array to Search.
  * @right: The Ending Index of the new[sub]Array to Search.
  * @value: The Value to Search For.
  * Return: If the Value is Not Present, or the Array is NULL, -1. Else, the
  * Index Where the Value is Located.
  * Description: Prints the new[sub]Array Being Searched After Each Change.
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
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

/**
  * exponential_search - Searches for a Value in a Sorted Array of Integers
  * Using Exponential Search.
  * @array: Ptr to the 1st Element of the Array to Search.
  * @size: The Number of Elements in the Array.
  * @value: The Value to Search For.
  * Return: If the Value is Not Present, or the Array is NULL, -1. Else,
  * the Index Where the Value is Located.
  * Description: Prints a Value Every Time it is Compared in the Array.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (_binary_search(array, i / 2, right, value));
}
