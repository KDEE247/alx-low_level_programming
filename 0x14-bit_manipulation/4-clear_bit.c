#include "main.h"
/**
 * clear_bit - Sets the value of a required bit to 0.
 * @n: the Pointer to the Number to be changed in the set.
 * @index: Index of the bit manipulated to be cleared.
 * Return: 1 for success, then -1 if failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
