#include <stdlib.h>
#include "main.h"
/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
int **all;
int a, b;
if (height <= 0 || width <= 0)
return (NULL);
all = (int **) malloc(sizeof(int *) * height);
if (all == NULL)
return (NULL);
for (a = 0; a < height; a++)
{
all[a] = (int *) malloc(sizeof(int) * width);
if (all[a] == NULL)
{
free(all);
for (b = 0; b <= a; b++)
free(all[b]);
return (NULL);
}
}
for (a = 0; a < height; a++)
{
for (b = 0; b < width; b++)
{
all[a][b] = 0;
}
}
return (all);
}
