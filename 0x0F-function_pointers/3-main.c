#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int c = 0, d = 0, res = 0;
char s;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
/* check if there is only one operator*/
if (argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}
c = atoi(argv[1]);
d = atoi(argv[3]);
res = (get_op_func(argv[2]))(c, d);
printf("%d\n", res);
return (0);
}
