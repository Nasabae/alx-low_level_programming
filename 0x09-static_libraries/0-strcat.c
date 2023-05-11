#include "main.h"

/**
 * *_strcat - concatenates @src to @dest
 * @src: the source string to append to @dest
 * @dest: the destiation string to be concatenated upon
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
int c = 0;
int d = 0;
while (dest[c++])
d++;
for (c = 0; src[c]; c++)
dest[d++] = src[c];
return (dest);
}
