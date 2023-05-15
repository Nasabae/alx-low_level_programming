#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Frees a 2-dimensional array of integers.
 * @grid: The 2-dimensional array of integers to be freed.
 * @height: The height of grid.
 */
void free_grid(int **grid, int height)
{
int z;
for (z = 0; z < height; z++)
free(grid[z]);
free(grid);
}
