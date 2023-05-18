#include <stdlib.h>
#include "main.h"
/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
int *pntr, z, size;
if (min > max)
return (NULL);
size = max - min + 1;
pntr = malloc(sizeof(int) * size);
if (pntr == NULL)
return (NULL);
for (z = 0; z < size; z++)
pntr[z] = min++;
return (pntr);
}
