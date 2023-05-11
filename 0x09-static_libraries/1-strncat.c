#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int c = 0, d = 0;
while (dest[c++])
d++;
for (c = 0; src[c] && c < n; c++)
dest[d++] = src[c];
return (dest);
}
