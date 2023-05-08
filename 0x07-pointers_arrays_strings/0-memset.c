#include <stdio.h>
#include "main.h"
/**
 * _memset - a function that fills a memory with a constant byte
 * @s: the area of memory to be filled
 * @b: the character to fill the area with
 * @n: the number of bytes to fill
 * Return: char*
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int z;
for (z = 0; z < n; z++)
{
s[z] = b;
}
return (s);
}
