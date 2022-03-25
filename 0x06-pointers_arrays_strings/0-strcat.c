#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: An input string
 * @src: An input string
 * Return: integer from conversion
 */

char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0'; /* add '\0' at the end (terminating Null character) */
	return (start);
}

