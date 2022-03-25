#include "main.h"

/**
 * reverse_array - a function that reverses the
 * content of an array of integers.
 * @a: an input integer
 * @n: an input integer
 * Return: A pointer to the resulting string
 */

void reverse_array(int *a, int n)
{
	int start = 0, temp;

	for (; start < n--; start++)
	{
		temp = a[start];
		a[start] = a[n];
		a[n] = temp;
	}

}

