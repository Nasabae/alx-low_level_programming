#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints the last digit of a random number whether it is > 5, < 6 or 0
 * Return: 0 (Win)
 */
int main(void)
{
int s, lastd;
srand(time(0));
s = rand() - RAND_MAX / 2;
lastd = s % 10;
if (lastd > 5)
{
printf("last digit of %d is %d and is greater than 5\n", s, s % 10);
}
else if (lastd == 0)
{
printf("last digit of %d is %d and is 0\n", s, s % 10);
}
else if (lastd < 6 && lastd != 0)
{
printf("last digit of %d is %d and is less than 6 and not 0\n", s, s % 10);
}
return (0);
}
