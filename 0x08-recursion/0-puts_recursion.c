#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 * @r: the string to be printed
 * Return: returns nothing
 */
void _puts_recursion(char *r)
{
if (*r == '\0')
{
_putchar('\n');
return;
}
_putchar (*r);
_puts_recursion((r + 1));
}
