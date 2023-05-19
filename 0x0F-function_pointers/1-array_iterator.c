#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * @array: array to iterate over
 * @size: size of the array
 * @action: pointer to function used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int z;
if (!array || !action)
return;
for (z = 0; z < size; z++)
action(array[z]);
}
