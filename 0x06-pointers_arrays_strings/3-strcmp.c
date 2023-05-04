#include "main.h"
/**
  * _strcmp - compares two strings
  * @s1: input value
  * @s2: input value
  * Return: s1 - s2.
  */
int _strcmp(char *s1, char *s2)
{
int z = 0;
while (s1[z] != '\0' && s2[z] != '\0')
{
if (s1[z] != s2[z])
{
return (s1[z] - s2[z]);
}
z++;
}
return (0);
}
