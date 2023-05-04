#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int c = 0, d = 0;
while (src[d])
{
d++;
}
while (c < n && src[c])
{
dest[c] = src[c];
c++;
}
while (c < n)
{
dest[c] = '\0';
c++;
}
return (dest);
}
