#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: string to print
 */
void puts_half(char *str)
{
int a, b, nasa;
nasa = 0;
for (a = 0; str[a] != '\0'; a++)
nasa++;
b = (nasa / 2);
if ((nasa % 2) == 1)
b = ((nasa + 1) / 2);
for (a = b; str[a] != '\0'; a++)
_putchar(str[a]);
_putchar('\n');
}
