#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies 2 args numbers
 * @argc: Number of arguments
 * @argv: Array name
 * Return: 1 (Error), 0 (Success)
 */

int main(int argc, char *argv[])
{
int c, d;
if (argc == 1 || argc == 2)
{
printf("Error\n");
return (1);
}
else
{
d = 1;
for (c = 1; c < 3; c++)
d *= atoi(argv[c]);
printf("%d\n", d);
}
return (0);
}
