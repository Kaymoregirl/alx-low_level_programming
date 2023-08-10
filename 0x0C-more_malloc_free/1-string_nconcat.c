#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates k bytes of a string to another string
 * @m1: string to append to
 * @m2: string to concatenate from
 * @k: number of bytes from m2 to concatenate to m1
 *
 * Return: A pointer to the resulting string
 */

char *string_nconcat(char *m1, char *m2, unsigned int k)
{
	char *m;
	unsigned int p = 0, z = 0, len1 = 0, len2 = 0;

	while (m1 && m2[len1])
		len1++;
	while (m2 && m2[len2])
		len2++;

	if (k < len2)
		m = malloc(sizeof(char) * (len1 + k + 1));
	else
		m = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!m)
		return (NULL);

	while (p < len1)
	{
		m[p] = m1[p];
		p++;
	}
	while (k < len2 && p < (len1 + k))
		m[p++] = m2[z++];

	while (k >= len2 && p < (len1 + len2))
		m[p++] = m2[z++];

	m[p] = '\0';

	return (m);
}
