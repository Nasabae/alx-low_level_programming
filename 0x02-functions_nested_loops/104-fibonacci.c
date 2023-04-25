#include <stdio.h>
/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 * Return: Always 0.
 */
int main(void)
{
int count;
unsigned long fi1 = 0, fi2 = 1, sum;
unsigned long fi1_hlf1, fi1_hlf2, fi2_hlf1, fi2_hlf2;
unsigned long hlf1, hlf2;
for (count = 0; count < 92; count++)
{
sum = fi1 + fi2;
printf("%lu, ", sum);
fi1 = fi2;
fi2 = sum;
}
fi1_hlf1 = fi1 / 10000000000;
fi2_hlf1 = fi2 / 10000000000;
fi1_hlf2 = fi1 % 10000000000;
fi2_hlf2 = fi2 % 10000000000;
for (count = 93; count < 99; count++)
{
hlf1 = fi1_hlf1 + fi2_hlf1;
hlf2 = fi1_hlf2 + fi2_hlf2;
if (fi1_hlf2 + fi2_hlf2 > 9999999999)
{
hlf1 += 1;
hlf2 %= 10000000000;
}
printf("%lu%lu", hlf1, hlf2);
if (count != 98)
printf(", ");
fi1_hlf1 = fi2_hlf1;
fi1_hlf2 = fi2_hlf2;
fi2_hlf1 = hlf1;
fi2_hlf2 = hlf2;
}
printf("\n");
return (0);
}
