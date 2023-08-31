#include "main.h"

/**
 * get_bit - The value of a bit to be returned at an index in a decimal number
 * @n: Search the number
 * @index: Bit of the index
 *
 * Return: value of the bit to be returned
 */


int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
