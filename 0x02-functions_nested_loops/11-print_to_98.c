#include "main.h"

/**
 * print_to_98 - Prints all numbers from input to 98,
 * seperated by commma, followed by space, printed in order
 * @n: the number to start counting from
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
			printf("%d, ", n--);

		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printg("%d, ", n++);
		printf("%d\n", n);
	}
}
