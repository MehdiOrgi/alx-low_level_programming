#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 * @n: An integer value
 *
 * Return: The absolute value of the integer.
 */
int _abs(int n)
{
	return (n * ((n > 0) - (n < 0)));
}
