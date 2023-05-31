#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: linked list
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
size_t total = 0;
while (h)
{
total++;
h = h->next;
}
return (total);
}
