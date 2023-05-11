#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
int c = 0, d = 0;
while (src[c++])
d++;
for (c = 0; src[c] && c < n; c++)
dest[c] = src[c];
for (c = d; c < n; d++)
dest[c] = '\0';
return (dest);
}
