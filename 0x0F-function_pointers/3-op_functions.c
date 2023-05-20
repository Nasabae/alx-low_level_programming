#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
 * op_add - calculates the sum of two integers
 * @c: first integer
 * @d: second integer
 * Return: sum of c and d
 */
int op_add(int c, int d)
{
return (c + d);
}

/**
 * op_sub - calculates the difference of two integers
 * @c: first integer
 * @d: second integer
 * Return: difference of c and d
 */
int op_sub(int c, int d)
{
return (c - d);
}

/**
 * op_mul - calculates the product of two integers
 * @c: first integer
 * @d: second integer
 * Return: product of c and d
 */
int op_mul(int c, int d)
{
return (c * d);
}

/**
 * op_div - calculates the division of two integers
 * @c: first integer
 * @d: second integer
 * Return: result of the division of c and d
 */
int op_div(int c, int d)
{
return (c / d);
}

/**
 * op_mod - calculates the remainder of the division of two integers
 * @c: first integer
 * @d: second integer
 * Return: remainder of c divided by d
 */
int op_mod(int c, int d)
{
return (c % d);
}
