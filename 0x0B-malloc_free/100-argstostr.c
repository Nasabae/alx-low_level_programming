#include "main.h"
#include <stdlib.h>
/**
  *argstostr - concatenates all arguments of the program.
  *@ac: argument count.
  *@av: pointer to array of size ac.
  *Return: NULL if ac == 0 or av == null, Pointer to new string.
  *NULL on fail.
  */
char *argstostr(int ac, char **av)
{
char *str;
int a, b, c, size = ac;
if (ac == 0 || av == NULL)
return (NULL);
for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b]; b++)
size++;
}
str = malloc(sizeof(char) * size + 1);
if (str == NULL)
return (NULL);
c = 0;
for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b]; b++)
str[c++] = av[a][b];
str[c++] = '\n';
}
str[size] = '\0';
return (str);
}
