#include "main.h"
/**
  * more_numbers - Print 10 times the numbers 0 to 14
  * Return: void
  */
void more_numbers(void)
{
int c, d;
for (c = 1; c <= 10; c++)
{
for (d = 0; d <= 14; d++)
{
if (d >= 10)
_putchar('1');
_putchar((d % 10) + '0');
}
_putchar('\n');
}
}
