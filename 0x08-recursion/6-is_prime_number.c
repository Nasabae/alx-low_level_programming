#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
  * is_prime_number - Returns if a number is prime
  * @n: the number to be checked
  * Return: integer value
  */
int is_prime_number(int n)
{
return (check_prime(n, 1));
}

/**
  * check_prime - Check if number is prime
  * @n: the number to be checked
  * @s: the iteration times
  * Return: 1 for prime or 0 composite
  */
int check_prime(int n, int s)
{
if (n <= 1)
return (0);
if (n % s == 0 && s > 1)
return (0);
if ((n / s) < s)
return (1);
return (check_prime(n, s + 1));
}
