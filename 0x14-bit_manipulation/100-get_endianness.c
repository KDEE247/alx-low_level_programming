#include "main.h"
/**
 * get_endianness - Checks order if a machine is little or big wrt endianness.
 * Return: 0 for big; if little.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
