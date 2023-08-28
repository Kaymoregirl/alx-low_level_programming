#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @d: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If d == 0 - 0.
 * Otherwise - the sum of all parameters.
 */

int sum_them_all(const unsigned int d, ...)
{
	va_list ap;
	unsigned int q, sum = 0;

	va_start(ap, d);

	for (q = 0; q < d; q++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
