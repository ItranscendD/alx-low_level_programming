#include "main.h"

/**
 * clear_bit - value of bit set to 0
 * @n: pointer to the number to change
 * @index: bit index to clear
 *
 * Return: -1 for failure, 1 for success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
