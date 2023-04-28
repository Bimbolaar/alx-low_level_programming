#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 * terms not exceeding 4000000.
 * Return: 0
 */

int main(void)
{
	unsigned long fibo1 = 0, fibo2 = 1, fibosum;
	float total_sum;

	while (1)
	{
		fibosum = fibo1 + fibo2;
			if (fibosum > 4000000)
				break;

					if ((fibosum % 2) == 0)
						total_sum += fibosum;
					
					fibo1 = fibo2;
					fibo2 = fibosum;
	}
	printf("%.0f\n", total_sum);

	return (0);
}
