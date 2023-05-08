#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
int z, sum1 = 0, sum2 = 0;
for (z = 0; z < size; z++)
{
sum1 += a[z];
a += size;
}
a -= size;
for (z = 0; z < size; z++)
{
sum2 += a[z];
a -= size;
}
printf("%d, %d\n", sum1, sum2);
}
