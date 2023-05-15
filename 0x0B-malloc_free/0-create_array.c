#include <stdlib.h>
#include "main.h"
/**
 * *create_array - creates an array of chars
 * @size: size of the array to create
 * @c: char to fill in the array
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
char *a;
unsigned int b;
if (size == 0)
return (NULL);
a = malloc(sizeof(char) * size);
if (a == NULL)
return (NULL);
for (b = 0; b < size; b++)
a[b] = c;
return (a);
}
