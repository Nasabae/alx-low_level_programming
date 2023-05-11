#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: memory area
 * @src: source
 * @n: length of src
 * Return: pointer to dest.
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
