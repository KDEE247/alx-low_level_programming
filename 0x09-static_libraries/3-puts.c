#include "main.h"
#include <stdio.h>
/**
 * _puts - puts function
 * @s: string value
 * Return: Always 0 (Success)
 */
void _puts(char *s)
{
int i = 0;
while (s[i])
{
_putchar(s[i]);
i++;
}
_putchar('\n');
}
