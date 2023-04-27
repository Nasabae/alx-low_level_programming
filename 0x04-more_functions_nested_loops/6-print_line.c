#include "main.h"
/**
  * print_line - Draws a straight line in the terminal
  * @n: The number of lines to draw
  */
void print_line(int n)
{
int s;
for (s = 0; s < n; s++)
{
_putchar('_');
}
_putchar('\n');
}
