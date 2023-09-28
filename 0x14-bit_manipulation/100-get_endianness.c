#include "main.h"

/**
 * get_endianness -  It checks if a machine is little or if the machine is big endian
 * Return: Return 0 for big, otherwise return 1 for little
 */

int get_endianness(void)
{
	unsigned int v = 1;
	char *z = (char *) &v;

	return (*z);
}
