#include "search_algos.h"
/**
  * advanced_binary_recursive - Searches Recursively For Values in a Sorted
  * Array of Integers Via Binary Search.
  * @array: A pointer to the first element of the [sub]array to search.
  * @left: The starting index of the [sub]array to search.
  * @right: The ending index of the [sub]array to search.
  * @value: The value to search for.
  * Return: If the value is not present, -1. Else, the Index Where the
  * Value is located.
  * Description: Prints the new [sub]array being searched after each change.
  */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
  * advanced_binary - Searches For a Value in a Sorted Array of Integers Via
  * Advanced Binary Search.
  * @array: Ptr to the 1st Element of the Array to Search.
  * @size: The Number of Elements in the Array.
  * @value: The Value to Search For.
  * Return: If the Value is not Present, or the Array is NULL, -1. Else, the
  * 1st Index Where the Value is Located.
  * Description: Prints the new [sub]array Being Searched After Each Change.
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
