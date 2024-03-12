#include "search_algos.h"
/**
  * linear_search - Searches For a Value in an Array
  * of Integers Using Linear Search.
  * @array: Ptr to the 1st Element of the Array to Search.
  * @size: The Number of Elements in the Array.
  * @value: The Value to Search For.
  * Return: If the Value is not Present or the array is NULL, -1.
  * Else, the 1st Index Where the Value is Located.
  * Description: Prints a Value Each Time it is Compared in the Array.
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
