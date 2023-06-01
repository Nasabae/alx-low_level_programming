#include "main.h"

/**
 * get_endianness - check endianness
 * Return: 0 if big endian, or 1 if little endian
 */
int get_endianness(void)
{
unsigned int nasa = 1;
char *c = (char *) &nasa;
return (*c);
}
