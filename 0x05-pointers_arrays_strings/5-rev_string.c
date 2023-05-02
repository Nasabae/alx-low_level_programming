#include "main.h"
/**
  * rev_string - Reverses a string
  * @s: The string to modify
  */
void rev_string(char *s)
{
char nasa = s[0];
int temp = 0;
int a;
while (s[temp] != '\0')
temp++;
for (a = 0; a < temp; a++)
{
temp--;
nasa = s[a];
s[a] = s[temp];
s[temp] = nasa;
}
}
