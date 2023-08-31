#include "main.h"
/**
 * flip_bits - Counts Number of bits that needs to be changed from digits.
 * @n: First Number.
 * @m: Second Number.
 * Return: Number of bits that needs to be changed.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
