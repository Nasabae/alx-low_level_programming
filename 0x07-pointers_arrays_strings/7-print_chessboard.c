#include "main.h"
/**
 * print_chessboard - Prints a chessboard.
 * @a: The chessboard to be printed.
 */
void print_chessboard(char (*a)[8])
{
int w, z;
for (w = 0; w < 8; w++)
{
for (z = 0; z < 8; z++)
{
_putchar(a[w][z]);
}
_putchar('\n');
}
}
