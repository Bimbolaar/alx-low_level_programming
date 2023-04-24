#include <stdio.h>
/**
 * main - print all single digits of base 10 from 0
 * only use putchar and withour charr variables
 *
 * Return: 0(Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
