#include "main.h"
/**
 * print_sign - print the sign of a number
 * @n: The character to print
 * Return: 1 if number is greater than 0
 * -1 if number is less than 0
 * 0 if number is 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
