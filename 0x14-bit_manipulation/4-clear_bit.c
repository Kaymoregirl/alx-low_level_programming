#include "main.h"

/**
 * clear_bit - The value of a given bit to 0 to be set
 * @n: Change the number of the pointer
 * @index: Clear the bitof an index
 *
 * Return: Return 1 if successful, Return -1 if failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
