#include <stdlib.h>
#include "main.h"
/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
char *s3;
int a, b = 0, len = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (a = 0; s1[a] || s2[a]; a++)
len++;
s3 = malloc(sizeof(char) * len);
if (s3 == NULL)
return (NULL);
for (a = 0; s1[a]; a++)
s3[b++] = s1[a];
for (a = 0; s2[a]; a++)
s3[b++] = s2[a];
return (s3);
}
