#include "main.h"

/**
 * power - computes base raised to exp
 * @base: base number
 * @exp: exp number
 * Return: result of exponentiation
 */
unsigned int power(int base, unsigned int exp)
{
	unsigned int i, result = 1;

	for (i = 0; i < exp; i++)
	result *= base;

	return (result);
}

/**
 * to_decimal - converts binary string to decimal
 * @c: string to convert
 * Return: converted number
 */
unsigned int to_decimal(const char *c)
{
	char *s = strdup(c);
	unsigned int j = strlen(s) - 1, res = 0, i;

	for (i = 0; s[i]; i++)
	{
		res += power(2, j) * (s[i] - '0');
		j--;
	}

	return (res);
}

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: string of 0s and 1s
 * Return: unsigned int number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result, i, j = 0, flag = 0;
	char *s = malloc(strlen(b) * sizeof(char));

	if (s == NULL)
		free(s);
	
	if (b == NULL)
		result = 0;

	else
	{
		for (i = 0; b[i]; i++)
		{
			/* check if there's a value that isn't 0 or 1 */
			if (b[i] != '0' && b[i] != '1')
			{
				result = 0;
				flag = 1;
				break;
			}
			else
			{
				s[j] = b[i];
				j++;
			}
		}
	}

	if (s != NULL && flag == 0)
		result = to_decimal(s);

	free(s);
	return (result);
}

