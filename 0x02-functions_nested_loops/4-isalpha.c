#include "main.h"
/**
 * _isalpha - checks if a character is alphabetic
 *
 * @ch: the character to be checked
 *
 * Return: 1 if the character is alphabetic (lowercase or uppercase), 0 otherwise
 */
int _isalpha(int ch)
{
	if (((ch >= 'a') && (ch <= 'z')) || ((ch >= 'A') && (ch <= 'Z')))
		return (1);
	else
		return (0);
}
