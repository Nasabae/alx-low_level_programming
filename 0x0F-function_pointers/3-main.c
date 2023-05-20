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
int (*func)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
func = get_op_func(argv[2]);
if (!func)
{
printf("Error\n");
exit(99);
}
printf("%d\n", func(atoi(argv[1]), atoi(argv[3])));
return (0);
}
