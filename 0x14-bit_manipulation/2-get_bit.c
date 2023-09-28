#include "main.h"

/**
 * get_bit - Value of a bit at an index in a decimal number to be returned
 * @n: Search the number
 * @index: index of the bit
 *
 * Return: Return value of the bit successful
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
