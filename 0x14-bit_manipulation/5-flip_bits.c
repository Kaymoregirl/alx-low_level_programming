#include "main.h"

/**
 * flip_bits - Change the number of bits to be counted
 * Move from one number to another
 * @n: The first number
 * @m:  The second number
 *
 * Return: Number of bits to change to be returned
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	{
		current = exclusive >> k;
		if (current & 1)
			count++;
	}

	return (count);
}
