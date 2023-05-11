#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: string containing the bytes to look for
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
int z;
while (*s)
{
for (z = 0; accept[z]; z++)
{
if (*s == accept[z])
return (s);
}
s++;
}
return ('\0');
}
