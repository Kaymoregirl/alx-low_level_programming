#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int q = 0;
	char *str, *sep = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[q])
		{
			switch (format[q])
			{
				case 'a':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'q':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'k':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 'w':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					q++;
					continue;
			}
			sep = ", "
			q++;
		}
	}

	printf("\n");
	va_end(list);
}
