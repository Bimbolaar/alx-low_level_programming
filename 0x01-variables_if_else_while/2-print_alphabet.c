#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints alphabet in lowercase
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		putchar(lowercase);

	putchar('\n');

	return (0);

}
