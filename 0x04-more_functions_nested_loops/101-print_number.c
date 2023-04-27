#include "main.h"
/**
  * print_number - Prints an integer
  * @n: integer to be printed
  */
void print_number(int n)
{
unsigned int s = n;
if (n < 0)
{
_putchar('-');
s = -s;
}
if (s / 10)
{
print_number(s / 10);
}
_putchar(s % 10 + '0');
}
