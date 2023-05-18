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
char *p;
unsigned int len1 = 0, len2 = 0, i;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1] != '\0')
{
len1++;
}
while (s2[len2] != '\0')
{
len2++;
}
if (n > len2)
n = len2;
p = malloc((len1 + n + 1) * sizeof(char));
if (p == NULL)
return (NULL);
for (i = 0; i < len1; i++)
{
p[i] = s1[i];
}
for (; i < (len1 + n); i++)
{
p[i] = s2[i - len1];
}
p[i] = '\0';
return (p);
}
