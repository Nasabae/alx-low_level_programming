#include "main.h"
#include <stdio.h>
/**
 * leet - change vowels to numbers.
 * @s: input string.
 *
 * Return: changed vowels
 */
char *leet(char *s)
{
char m[] = "aeotlAEOTL";
char n[] = "4307143071";
int a = 0;
int b;
while (*(s + a) != '\0')
{
for (b = 0; b <= 9; b++)
{
if (*(s + a) == m[b])
{
*(s + a) = n[b];
}
}
a++;
}
return (s);
}
