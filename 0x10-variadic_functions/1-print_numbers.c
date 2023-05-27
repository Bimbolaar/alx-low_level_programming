#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @n: number of parameter
 * @separator: separator between two numbers
 * Return: Always 0
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list valist;

	va_start(valist, n);

	if (seperator == NULL)
		seperator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (1 < n - 1)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(valist);
}
