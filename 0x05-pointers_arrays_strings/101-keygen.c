#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a program that generates random valid passwords,
 * for the program 101-crackme.
 *
 * Return: Nothing
 */

int main(void)
{
	int x = 2772, i = 0, y = 0, aux;
	char password[100];
	time_t t;

	srand((int) time(&t));
	while (x > 126)
	{
		aux = rand() % 126;
		password[i] = aux;
		x -= aux;
		i++;
	}

	if (x > 0)
		password[i] = x;
	else
	{
		i--;
	}

	for (; y <= i; y++)
	{
		printf("%c", password[y]);
	}
	printf("\n");
	return (0);
}

