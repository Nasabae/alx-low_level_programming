#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 */
void print_alphabet_x10(void)
{
int ten;
char la;
ten = 0;
while (ten < 10)
{
for (la = 'a'; la <= 'z'; la++)
{
_putchar(la);
}
_putchar('\n');
ten++;
}
}
