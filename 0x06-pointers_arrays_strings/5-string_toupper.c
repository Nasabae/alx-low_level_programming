#include "main.h"
/**
  * string_toupper - Changes all lowercase letters to uppercase
  * @z: the input string
  *
  * Return: z
  */
char *string_toupper(char *z)
{
int b = 0;
while (z[b])
{
if (z[b] >= 97 && z[b] <= 122)
{
z[b] -= 32;
}
b++;
}
return (z);
}
