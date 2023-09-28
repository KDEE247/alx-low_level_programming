#include "main.h"
/**
 * clear_bit - Sets the value of a manipulated bit to 0
 * @n: pointer to the number requiring change
 * @index: Index of the bit manipulated to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
