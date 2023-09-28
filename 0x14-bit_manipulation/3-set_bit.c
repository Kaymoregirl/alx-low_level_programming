#include "main.h"

/**
 * set_bit - 1 to be set at a given bit
 * @n: Change the number to the pointer
 * @index: 1 to be set to the index of the bit
 *
 * Return: 1 to be returned successful,otherwise -1 to be returned for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
