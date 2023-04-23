#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints the last digit of a random number whether it is > 5, < 6 or 0
 * Return: 0 (Win)
 */
int main(void)
{
int s;
srand(time(0));
s = rand() - RAND_MAX / 2;
if ((s % 10) > 5)
{
printf("last digit of %d is %d and is greater than 5\n", s, s % 10);
}
else if ((s % 10) < 6 && (s % 10) != 0)
{
printf("last digit of %d is %d and is less than 6 and not 0\n", s, s % 10);
}
else
{
printf("last digit of %d is %d and is 0\n", s, s % 10);
}
return (0);
}
