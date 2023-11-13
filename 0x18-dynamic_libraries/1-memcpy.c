#include "main.h"
/**
 * _memcpy - Copy Memory Areas.
 * @dest: Char Array to Copy to (Destination).
 * @src: Char Array to Copy 4rm (Source).
 * @n: Nos of Elements to Copy.
 * Return: Ptr to 'dest'
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		dest[count] = src[count];
		count++;
	}

	return (dest);
}
