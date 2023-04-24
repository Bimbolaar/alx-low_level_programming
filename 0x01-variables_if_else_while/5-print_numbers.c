#include <stdio.h>

/**
 * main - prints single digits after 0, before 10
 * each digit on a new line
 * Return: 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	printf("\n");

	return (0);

}
