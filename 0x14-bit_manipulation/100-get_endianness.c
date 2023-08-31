#include "main.h"

/**
 * get_endianness - Machine is little or big endian to be checked
 * Return: 0 to be returned for big, 1 to be returned for little
 */

int get_endianness(void)
{
	unsigned int k = 1;
	char *c = (char *) &k;

	return (*c);
}
