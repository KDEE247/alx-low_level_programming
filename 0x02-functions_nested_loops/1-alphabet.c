#include "main.h"
/**
 *main - a program function that prints the alphabet, in lowercase
 *Return: Always 0
 */
void print_alphabet(void)/*print_alphabet(void) is a function prototype*/
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
