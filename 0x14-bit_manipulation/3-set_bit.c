#include "main.h"

/**
 * set_bit - bit at a given index is set to 1
 * @n: pointer to the number to change
 * @index: bit index is set to 1
 *
 * Return: -1 for failure, 1 for success,
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
