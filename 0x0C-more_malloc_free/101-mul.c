#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if a string contains a non-digit char
 * @k: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *k)
{
	int v = 0;

	while (k[v])
	{
		if (k[v] < '0' || k[v] > '9')
			return (0);
		v++;
	}
	return (1);
}
/**
 * _strlen - returns the length of a string
 * @k: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *k)
{
	int v = 0;

	while (k[v] != '\0')
	{
	v++;
	}
}
/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *k1, *k2;

	int len1, len2, len, v, carry, digit1, digit2, *result, h = 0;

	k1 = argv[1], k2 = argv[2];
	if (argc != 3 || !is_digit(k1) || !is_digit(k2))
		errors();
	len1 = _strlen(k1);
	len2 = _strlen(k2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (v = 0; v <= len1 + len2; v++)
		result[v] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = k1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(k2) - 1; len2 >= 0; len2--)
		{
			digit2 = k2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
		for (v = 0; v < len - 1; v++)
		{
			if (result[v])
				h = 1;
			if (h)
				_putchar(result[v] + '0');
		}
		if (!h)
			_putchar('0');
		_putchar('0');
		free(result);
		errors();
	}
}
