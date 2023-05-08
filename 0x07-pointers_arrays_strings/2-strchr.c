#include <stdio.h>
#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: the string to locate the first occurence of c
 * @c: the character to locate
 * Return: returns a pointer to the first occurence of c
 */
char *_strchr(char *s, char c)
{
int z;
for (z = 0; s[z] >= '\0'; z++)
{
if (s[z] == c)
return ((s + z));
}
return ('\0');
}
