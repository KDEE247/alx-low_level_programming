#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns sum of the two numbers.
 * @a: first number.
 * @b: second number.
* Return: sum of a and b.
*/
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - Returns difference of the two numbers.
 * @a: first number.
 * @b: second number.
 * Return: difference of a and b.
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
* op_mul - Returns product of the two numbers.
* @a: first number.
* @b: second number.
* Return: The product of a and b.
*/
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - Returns division of the two numbers.
 * @a: first number.
 * @b: second number.
 * Return: quotient of a and b.
 */
int op_div(int a, int b)
{
return (a / b);
}
/**
 * op_mod - Returns remainder of division of the two numbers.
 * @a: first number.
 * @b: second number.
 * Return: remainder of division of a by b.
 */
int op_mod(int a, int b)
{
return (a % b);
}
