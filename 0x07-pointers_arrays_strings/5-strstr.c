#include "main.h"
/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 * Return: If the substring is located - a pointer to the beginning
 *         of the located substring.
 * If the substring is not located - NULL.
 */
char *_strstr(char *haystack, char *needle)
{
int z;
if (*needle == 0)
return (haystack);
while (*haystack)
{
z = 0;
if (haystack[z] == needle[z])
{
do {
if (needle[z + 1] == '\0')
return (haystack);
z++;
} while (haystack[z] == needle[z]);
}
haystack++;
}
return ('\0');
}
