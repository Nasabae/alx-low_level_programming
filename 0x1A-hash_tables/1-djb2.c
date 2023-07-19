#include "hash_tables.h"

/**
* hash_djb2 - Hash function implementing the djb2 algorithm.
* @str: The string to hash.
* Return: The calculated hash.
*/
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash;
int z;

hash = 5381;
while ((z = *str++))
hash = ((hash << 5) + hash) + z; /* hash * 33 + z */

return (hash);
}
