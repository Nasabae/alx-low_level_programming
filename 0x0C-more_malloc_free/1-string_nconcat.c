#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *c;
unsigned int len = n, a;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (a = 0; s1[a]; a++)
len++;
c = malloc(sizeof(char) * (len + 1));
if (c == NULL)
return (NULL);
len = 0;
for (a = 0; s1[a]; a++)
c[len++] = s1[a];
for (c = 0; s2[a] && a < n; a++)
c[len++] = s2[a];
c[len] = '\0';
return (c);
}