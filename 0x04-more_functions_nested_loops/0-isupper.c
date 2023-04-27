#include "main.h"
/**
  * _isupper - Check if a letter is uppercase
  * @c: The character to be checked
  * Return: 1 for uppercase letter or 0 for anything else
  */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
return (0);
}
