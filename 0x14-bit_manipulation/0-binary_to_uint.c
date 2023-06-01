#include "main.h"
#include <stdio.h>

/**
  * binary_to_uint - Converts a binary number to an unsigned int
  * @b: The binary string to convert
  * Return: The positive number converted from a binary
  */
unsigned int binary_to_uint(const char *b)
{
unsigned int count, num;
int length;
if (b == NULL)
return (0);
for (length = 0; b[length]; length++)
{
if (b[length] != '0' && b[length] != '1')
return (0);
}
for (num = 1, count = 0, length--; length >= 0; length--, num *= 2)
{
if (b[length] == '1')
count += num;
}
return (count);
}
