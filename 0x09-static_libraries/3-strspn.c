#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int c = 0;
int d;
while (*s)
{
for (d = 0; accept[d]; d++)
{
if (*s == accept[d])
{
c++;
break;
}
else if (accept[d + 1] == '\0')
return (c);
}
s++;
}
return (c);
}
