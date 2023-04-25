#include <stdio.h>
/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 * Return: Always 0.
 */
int main(void)
{
unsigned long fi1 = 0, fi2 = 1, fisum;
float tot_sum;
while (1)
{
fisum = fi1 + fi2;
if (fisum > 4000000)
break;
if ((fisum % 2) == 0)
tot_sum += fisum;
fi1 = fi2;
fi2 = fisum;
}
printf("%.0f\n", tot_sum);
return (0);
}
