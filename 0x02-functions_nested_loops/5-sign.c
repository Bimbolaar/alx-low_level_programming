#include "main.h"

/**
 * print_sign - checks if number is greater or less than zero
 * and prints the sign of a number
 * @n: The number of which the sign will be printed
 * Return: 1 if the number if greater than zero,
 * 0 if the number is zero,
 * -1 if the number is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);

	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);

	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
