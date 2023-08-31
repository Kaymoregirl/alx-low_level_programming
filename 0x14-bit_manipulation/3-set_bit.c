#include "main.h"

/**
 * set_bit - 1 to be set at a bit at a given index
 * @n: Change the number of the pointer
 * @index: index of the bit to set to 1
 *
 * Return: 1 to be returned if successful, -1 to be returned for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
