#include <stdlib.h>
#include "main.h"
/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
char *z;
unsigned int a, len;
a = 0;
len = 0;
if (str == NULL)
return (NULL);
while (str[len])
len++;
z = malloc(sizeof(char) * (len + 1));
if (z == NULL)
return (NULL);
while ((z[a] = str[a]) != '\0')
a++;
return (z);
}
