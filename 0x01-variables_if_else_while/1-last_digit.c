#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints a random number whether it is > 5, < 6 or zero
 * Return: 0 (Win)
 */
int main(void)
{
int n;
int s;
srand(time(0));
n = rand() - RAND_MAX / 2;
s = n % 10;
if ('s' > 5)
{
printf("last digit of %d is %d and is greater than 5\n", n, 's');
}
else if ('s' == 0)
{
printf("last digit of %d is %d and is 0\n", n, 's');
}
else
{
printf("last digit of %d is %d and is less than 6 and not 0\n", n, 's');
}
return (0);
}
