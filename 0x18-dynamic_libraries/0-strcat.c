#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string with extra string
 * @src: string to be added on dest
 *
 * Return: a pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int len_dest, len_src;

	len_dest = 0;
	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}
	for (len_src = 0; src[len_src] != '\0'; len_src++, len_dest++)
	{
		dest[len_dest] = src[len_src];
	}
	dest[len_dest] = '\0';
	return (dest);
}

