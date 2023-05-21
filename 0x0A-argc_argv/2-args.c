#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: argument count
 * @argv: argguments
 *
 * Return: 0
 */
int main(int argc, int **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
