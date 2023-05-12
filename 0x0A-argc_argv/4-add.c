#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * main - Prints the sum of 2 positive numbers
 * @argc: Number of arguments
 * @argv: Array name
 * Return: 1 if a non-integer is among the passed in arguments, 0 otherwise
 */

int main(int argc, char *argv[])
{
int c, d, len, sum;
char *ptr;
if (argc < 2)
printf("0\n");
else
{
sum = 0;
for (c = 1; c < argc; c++)
{
ptr = argv[c];
len = strlen(ptr);
for (d = 0; d < len; d++)
{
if (isdigit(*(ptr + d)) == 0)
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[c]);
}
printf("%d\n", sum);
}
return (0);
}
