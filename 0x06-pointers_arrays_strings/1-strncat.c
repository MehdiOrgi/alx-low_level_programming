#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: pointer to the destination string.
 * @src: pointer to the source string.
 * @n: maximum number of bytes to be used from src.
 *
 * Return: pointer to the resulting string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
