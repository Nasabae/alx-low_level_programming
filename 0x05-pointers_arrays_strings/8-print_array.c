#include "main.h"
#include <stdio.h>
/**
  * print_array - Prints n elements of an array of integers
  * @a: Array of integers
  * @n: The number of elements of the array to be printed
  */
void print_array(int *a, int n)
{
int s;
for (s = 0; s < n; s++)
{
printf("%d", a[s]);
if (s != (n - 1))
{
printf(", ");
}
}
printf("\n");
}
