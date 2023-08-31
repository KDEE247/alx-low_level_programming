#include "main.h"
/**
 * set_bit - Sets bit at the specified index to 1.
 * @n: A Pointer to the Number to be changed.
 * @index: Index of the bit is set to 1.
 * Return: 1 for success, and -1 if failure.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

