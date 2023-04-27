#include <stdio.h>

/**
 * main - Computes and prints sum of all the numbers below 1024(excluded)
 * that are multiples of 3 and 5
 * Return: 0
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += 1;
	}

	printf("%d\n", sum);

	return (0);
}
