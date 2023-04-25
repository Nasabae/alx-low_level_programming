#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: The number to print
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
int lastd;
lastd = n % 10;
if (lastd < 0)
{
lastd = lastd * -1;
}
_putchar(lastd + '0');
return (lastd);
}
