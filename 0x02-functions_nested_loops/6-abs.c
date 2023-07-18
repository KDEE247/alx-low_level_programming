#include "main.h"
/**
 * main - Entry point
 * _abs - a funtion that computes the absolute value of an integer
 * @c:The number to be computed
 * Return: Absolute value of number of zero
 */
int _abs(int c) /* description: a function that prints absolute value of integers
*/
{
if (c < 0)
{
int abs_val;
abs_val = c * -1;
return (abs_val);
}
return (c);
}
