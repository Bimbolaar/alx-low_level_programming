#include "main.h"

/** print_most_numbers - prints numbers from 0 to 9
 * followed by new line
 * Do not print 2 and 4
 * Return: 0 (Success)
 */
void print_most_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
