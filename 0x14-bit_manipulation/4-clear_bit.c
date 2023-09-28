#include "main.h"

/**
 * clear_bit - Value of a given bit to be sets to 0
 * @n: Change the number to the pointer
 * @index: Clear the index of the bit
 *
 * Return: 1 to be returned successful, otherwise return -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
