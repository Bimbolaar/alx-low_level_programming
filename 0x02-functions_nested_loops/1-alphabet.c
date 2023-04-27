#include "main.h"
/**
 * print_alphabet - prints 10times the alphabet, in lowercase
 * followed by a new line
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		_putchar(lowercase);

	_putchar('\n');
}
