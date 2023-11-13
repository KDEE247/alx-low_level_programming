#include "main.h"
/**
 * _strcat - Concatenates 2 Strings.
 * @dest: Char String to Concatenate (destination).
 * @src: Char String (source)
 * Return: Ptr to Resulting String 'dest'
 */

char *_strcat(char *dest, char *src)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[i] = src[c];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
