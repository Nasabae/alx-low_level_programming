#include <stdlib.h>
#include "main.h"
/**
 * word_len - Locates the index marking at the end of the
 *            first word contained within a string
 * @str:  string to be searched
 * Return: index marking at the end of the initial word pointed to by str.
 */
int word_len(char *str)
{
int a = 0, len = 0;
while (*(str + a) && *(str + a) != ' ')
{
len++;
a++;
}
return (len);
}

/**
 * count_word - helper function to count the number of words in a string
 * @str: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *str)
{
int a = 0, words = 0, len = 0;
for (a = 0; *(str + a); a++)
len++;
for (a = 0; a < len; a++)
{
if (*(str + a) != ' ')
{
words++;
a += word_len(str + a);
}
}
return (words);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{char **temp;
int a = 0, words, x, let, z;
if (str == NULL || str[0] == '\0')
return (NULL);
words = count_word(str);
if (words == 0)
return (NULL);
temp = malloc(sizeof(char *) * (words + 1));
if (temp == NULL)
return (NULL);
for (x = 0; x < words; x++)
{
while (str[a] == ' ')
a++;
let = word_len(str + a);
temp[x] = malloc(sizeof(char) * (let + 1));
if (temp[x] == NULL)
{
for (; x >= 0; x--)
free(temp[x]);
free(temp);
return (NULL);
}
for (z = 0; z < let; z++)
temp[x][z] = str[a++];
temp[x][z] = '\0';
}
temp[x] = NULL;
return (temp);
}
