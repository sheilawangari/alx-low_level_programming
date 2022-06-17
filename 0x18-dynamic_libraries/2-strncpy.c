#include "main.h"

/**
 * _strncpy - copies a string
 * count till all bytes are written
 * @dest: pointer to a string
 * @src: pointer to a string
 * @n: number of bytes to be used
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}

