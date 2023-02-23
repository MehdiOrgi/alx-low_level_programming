#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Prints all natural numbers from a given number up to 98
 * @n: The starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (int i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	else if (n > 98)
	{
		for (int i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	else
		printf("98");

	printf("\n");
}
