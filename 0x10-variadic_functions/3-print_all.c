#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i;
	int flag;
	char *str;

	va_start(valist, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(valist, int));
				flag = 0;
				break;
			case 'i':
				printf("%i", va_arg(valist, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(valist, double));
				flag = 0;
				break;
			case 's':
				str = va_arg(valist, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(valist);
}
