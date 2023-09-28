#include "main.h"

/**
 * flip_bits - Change the counted number of bits
 *  to move from one number to another number
 * @n: first number
 * @m: second number
 *
 * Return: Change the number of bit
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int v, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (v = 63; v >= 0; v--)
	{
		current = exclusive >> v;
		if (current & 1)
			count++;
	}

	return (count);
}
