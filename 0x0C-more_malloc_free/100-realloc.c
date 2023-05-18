#include <stdlib.h>
#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *m;
char *nptr, *ptr1;
unsigned int index;
if (new_size == old_size)
return (ptr);
if (ptr == NULL)
{
m = malloc(new_size);
if (m == NULL)
return (NULL);
return (m);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
nptr = ptr;
m = malloc(sizeof(*nptr) * new_size);
if (m == NULL)
{
free(ptr);
return (NULL);
}
ptr1 = m;
for (index = 0; index < old_size && index < new_size; index++)
ptr1[index] = *nptr++;
free(ptr);
return (m);
}
