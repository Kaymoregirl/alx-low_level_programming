#include "main.h"
#include <unistd.h>

/**
 * _putchar - Character c to be wretten in starndard output
 * @c: Print character
 *
 * Return: Return 1 succesful
 * On error, -1 to be returned, and error is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
