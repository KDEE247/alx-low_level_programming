#include "main.h"
/**
 * get_bit - Returns value of a bit manipulated at a given index.
 * @n: Number searched for
 * @index: index of the bit starts 4rm 0
 * Return: Value of the bit manipulated at Index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
