#include "main.h"

/**
 * _memcpy - function that copies @n bytes from memory area @src
 * to memory area @dest
 *
 * @n: bytes of the memory
 * @src: source of data to be copied
 * @dest: desstination to be copied to
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + 1) = *(src + i);
		i++;
	}

	return (dest);
}
