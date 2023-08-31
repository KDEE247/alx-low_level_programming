#include "main.h"
/**
 * get_endianness - Checks whether a machine is little, or big Endian
 * Return: 0 for big, or 1 for little Endian.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
