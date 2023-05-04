#include "main.h"
#include <stdio.h>
/**
 * _strcmp - compares two strings.
 * @sa: string to be compared.
 * @sb: string for comparation.
 * Return: Difference between the 2 strings.
 */
int _strcmp(char *sa, char *sb)
{
while ((*sa != '\0' && *sb != '\0') && *sa == *sb)
{
sa++;
sb++;
}
if (*sa == *sb)
{
return (0);
}
else
{
return (*sa - *sb);
}
}
