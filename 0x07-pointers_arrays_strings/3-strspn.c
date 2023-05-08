#include <stdio.h>
#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: the string to be tested
 * @accept: the string to find
 * Return: returns the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int m, n;
unsigned int o = 0;
for (m = 0; s[m] != 0; m++)
{
if (s[m] == ' ')
break;
for (n = 0; accept[n] != 0; n++)
{
if (s[m] == accept[n])
o++;
}
}
return (o);
}
