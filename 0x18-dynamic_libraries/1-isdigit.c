#include "main.h"
/**
 * _isdigit - Check for digits between zero, & nine.
 * @c: Int Parameters.
 * Return: 1 if digit; Else 0.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
