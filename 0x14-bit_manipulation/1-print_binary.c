#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
unsigned long int tempo;
int shifts_;
if (n == 0)
{
printf("0");
return;
}
for (tempo = n, shifts_ = 0; (tempo >>= 1) > 0; shifts_++)
;
for (; shifts_ >= 0; shifts_--)
{
if ((n >> shifts_) & 1)
printf("1");
else
printf("0");
}
}
