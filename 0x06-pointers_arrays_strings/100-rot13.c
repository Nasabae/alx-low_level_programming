#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: the string
 * Return: the encoded string
 */
char *rot13(char *s)
{
int a, b;
char *letters1 = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
char *letters2 = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};
for (a = 0; s[a] != '\0'; a++)
{
for (b = 0; b < 52; b++)
{
if (s[a] == letters1[b])
{
s[a] = letters2[b];
break;
}
}
}
return (s);
}
