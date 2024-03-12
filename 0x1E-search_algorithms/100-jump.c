#include "search_algos.h"
/**
  * jump_search - Searches For Value in Sorted Array of Integer via Jump Search
  * @array: Ptr to the 1st Element of the Array Searched.
  * @size: The Number of Elements in the Array.
  * @value: The value to Search For.
  * Return: If the value is not Present or the Array is NULL, -1. Else, the 1st
  * Index Where the Value is Located.
  * Description: Prints a Value Each Time it is Compared in the Array. Uses the
  * Square Root of the Array Size as the Jump Step.
  */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
