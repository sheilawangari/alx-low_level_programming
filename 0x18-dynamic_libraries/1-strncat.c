#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: pointer to dest
 * @src: pointer to src
 * @n: number
 *
 * Return: a pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_dest, len_src;

	len_dest = 0;
	while (dest[len_dest] != '\0')
		len_dest++;
	for (len_src = 0; len_src < n && src[len_src] != '\0'; len_src++, len_dest++)
	{
		dest[len_dest] = src[len_src];
	}
	dest[len_dest] = '\0';
	return (dest);
}

