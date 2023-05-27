#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *str;

	va_start(valist, n);
	if ( seperator == NULL)
		seperator = "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char *);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if ( i < n - 1)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(valist);
}