#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
* hash_table_get - Retrieves a value associated with a key
* @ht: The hash table to look into
* @key: The key to find
*
* Return: The value associated with the element
* or NULL if key couldn't be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int indx = 0;
hash_node_t *node = NULL;

if (ht == NULL || key == NULL)
return (NULL);

indx = key_index((unsigned char *) key, ht->size);
node = ht->array[indx];

if (node == NULL)
return (NULL);

while (strcmp(key, node->key) != 0)
node = node->next;

return (node->value);
}
