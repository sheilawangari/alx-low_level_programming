#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: a pointer to the memory area
 * @b: constant byte
 * @n: number of bytes of the memory area
 *
 * Return: the pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	j = 0;
	while (j < n)
	{
		s[j] = b;
		j++;
	}
	return (s);
}

