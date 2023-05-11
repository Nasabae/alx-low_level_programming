#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
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
