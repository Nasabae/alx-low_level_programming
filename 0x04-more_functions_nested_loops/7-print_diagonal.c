#include "main.h"
/**
  * print_diagonal - Draws a diagonal line
  * @n: number of times to print diagonal line
  */
void print_diagonal(int n)
{
int c, d;
if (n <= 0)
_putchar('\n');
for (c = 0; c < n; c++)
{
for (d = 0; d < c; d++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
