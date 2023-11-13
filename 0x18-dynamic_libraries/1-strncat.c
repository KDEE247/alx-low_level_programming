#include "main.h"
/**
 * _strncat - Concatenates 2 Strings.
 * @dest: String to be Copied to.
 * @src: String to copy 4rm.
 * @n: Nos of Elements to Concatenate.
 * Return: Ptr to Resulting 'dest'
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0' && n > 0; c++, n--, i++)
	{
		dest[i] = src[c];
	}
	return (dest);
}
