#include "main.h"
/**
 * _memset - Fills Memory With Constant Byte(s).
 * @s: Buffer Array.
 * @b: Constant Bytes.
 * @n: Nos of Bytes of Memory area filled.
 * Description: Fill 1st n byte of Memory area ptr 's' with constant byte 'b'
 * Return: Ptr to Memory area 's'
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		s[count] = b;
		count++;
	}

	return (s);
}
