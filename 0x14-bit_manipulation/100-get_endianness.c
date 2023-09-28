#include "main.h"

/**
 * get_endianness - will check if a machine is little or big endian
 * Return: 1 for little, 0 for big
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
