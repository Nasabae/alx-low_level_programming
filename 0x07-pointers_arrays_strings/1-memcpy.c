#include "main.h"
/**
 * _memcpy - a function that copies a memory area
 * @dest: the destination buffer
 * @src: the source buffer
 * @n: area size
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int z;
for (z = 0; z < n; z++)
{
dest[z] = src[z];
}
return (dest);
}
