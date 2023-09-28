#include "main.h"
/**
 * flip_bits - Counts the nos of bits to flip a change
 * @n: 1st nos.
 * @m: 2nd nos.
 * Return: nos of bits manipulated to flip.
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
