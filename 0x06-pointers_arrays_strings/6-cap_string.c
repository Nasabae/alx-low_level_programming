#include "main.h"
/**
  * cap_string - capitalizes all words of a string
  * @s: input string
  * Return: Pointer to dest.
  */
char *cap_string(char *s)
{
int c, d;
int a[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
c = 0;
while (*(s + c) != '\0')
{
if (*(s + c) >= 'a' && *(s + c) <= 'z')
{
if (c == 0)
{
*(s + c) = *(s + c) -32;
}
else
{
for (d = 0; d <= 12; d++)
{
if (a[d] == *(s + c - 1))
{
*(s + c) = *(s + c) -32;
}
}
}
}
c++;
}
return (s);
}
