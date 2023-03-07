#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: pointer to string to search
 * @c: character to find in string
 *
 * Return: pointer to first occurrence of character c in string s,
 *         or NULL if character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
