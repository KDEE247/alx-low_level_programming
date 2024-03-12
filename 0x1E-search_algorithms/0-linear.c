#include "search_algos.h"
/**
  * linear_search - Searches Values in an Array of Integers via Linear Search
  * @array: Ptr to 1st Element of the Array to Search.
  * @size: The Number of Elements in the Array.
  * @value: The Value to Search For.
  * Return: If the value is Not Present, or the Array is NULL, -1. Else, the
  * 1st Index Where the Value is Located.
  * Description: Prints Value Each Time it is Compared in the Array.
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
