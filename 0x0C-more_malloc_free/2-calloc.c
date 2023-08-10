#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @l: memory area to be filled
 * @d: char to copy
 * @q: number of times to copy b
 *
 * Return: The pointer to the memory area l
 */

char *_memset(char *l, char d, unsigned int q)
{
	unsigned int v;

	for (v = 0; v < q; v++)
	{
		l[v] = d;
	}
	return (l);
}
/**
 * *_calloc - allocates memory for an array
 * @qmemd: the number of elements in the array
 * @size: size of each element
 *
 * Return: The pointer to allocated memory
 */

void *_calloc(unsigned int qmemd, unsigned int size)
{
	char *ptr;

	if (qmemd == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * qmemd);
	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, qmemd * size);

	return (ptr)
}
