#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @bc: int input
 * @ad: double pointer array
 * Return: 0
 */

char *argstostr(int bc, char **ad)
{
	int i, n, r = 0, l = 0;
	char *str;

	if (bc == 0 || ad == NULL)
		return (NULL);

	for (i = 0; i < bc; i++)
	{
		for (n = 0; ad[i][n]; n++)
			l++;
	}
	l += bc;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < bc; i++)
	{
	for (n = 0; ad[i][n]; n++)
	{
		str[r] = ad[i][n];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}
