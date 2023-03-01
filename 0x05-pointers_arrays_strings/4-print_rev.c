#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: string to reverse and print
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len, i;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
