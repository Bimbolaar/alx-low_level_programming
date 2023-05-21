#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0 if Success, otherwise 1
 */
int main(int argc, char **argv)
{
	int x, y;

	if (argc != 2)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
		return (0);
	}
	printf("Error\n");
	return (1);
}
