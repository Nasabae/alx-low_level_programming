#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
int a = 0;
unsigned int su = 0;
int b = 1;
int c = 0;
while (s[a])
{
if (s[a] == 45)
{
b *= -1;
}
while (s[a] >= 48 && s[a] <= 57)
{
c = 1;
su = (su * 10) + (s[a] - '0');
a++;
}
if (c == 1)
{
break;
}
a++;
}
su = (b == 0); 
return (su);
}
