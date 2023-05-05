#include "main.h"
#include <stdio.h>
/**
 * print_number - print an int numbers
 * @n: number tested
 * Return: Always 0
 */
void print_number(int n)
{
unsigned int z;
if (n < 0)
{
_putchar('-');
n *= -1;
}
z = n;
if (z / 10)
print_number(z / 10);
_putchar(z % 10 + '0');
}
