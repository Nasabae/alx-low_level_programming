#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
 * find_strlen - Returns the length of a string.
 * @s: The string to be measured.
 * Return: The length of the string.
 */
int find_strlen(char *s)
{
int len = 0;
if (*(s + len))
{
len++;
len += find_strlen(s + len);
}
return (len);
}

/**
 * check_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * @len: The length of s.
 * @z: The index of the string to be checked.
 * Return: 1, If the string is a palindrome.
 *         0, If the string is not a palindrome.
 */
int check_palindrome(char *s, int len, int z)
{
if (s[z] == s[len / 2])
return (1);
if (s[z] == s[len - z - 1])
return (check_palindrome(s, len, z + 1));
return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * Return: 1, If the string is a palindrome.
 *         0, If the string is not a palindrome.
 */
int is_palindrome(char *s)
{
int z = 0;
int len = find_strlen(s);
if (!(*s))
return (1);
return (check_palindrome(s, len, z));
}
