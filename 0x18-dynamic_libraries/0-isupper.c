#include "main.h"
/**
 * _isupper - It Checks For Uppercase Characters.
 * @c: Integer Nos
 * Return: 1 if uppercase; Else 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
