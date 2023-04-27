#include "main.h"
/**
  * print_square - Prints a square
  * @size: size of a square
  */
void print_square(int size)
{
int c, d;
if (size <= 0)
_putchar('\n');
for (c = 0; c < size; c++)
{
for (d = 0; d < size; d++)
{
_putchar('#');
}
_putchar('\n');
}
}
