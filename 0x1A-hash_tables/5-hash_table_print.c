#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
* hash_table_print - Prints a hash table
* @ht: The hash table to print
*
* Return: Nothing!
*/
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *node = NULL;
unsigned long int z = 0;
short pr_commas = 0;

if (ht == NULL)
return;

printf("{");

for (; z < ht->size; ++z)
{
node = ht->array[z];

while (node)
{
if (pr_commas == 1)
printf(", ");

pr_commas = 1;
printf("'%s': '%s'", (char *) node->key,
(char *) node->value);

node = node->next;
}
}

printf("}\n");
}
