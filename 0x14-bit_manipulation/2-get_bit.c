#include "main.h"

/**
 * get_bit - Returns required value of a bit at the index in a decimal number.
 * @n: Number to search for.
 * @index: Index of the bit manipulation, begins from 0.
 * Return: value of the bit of the decimal, or (-1) if error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
