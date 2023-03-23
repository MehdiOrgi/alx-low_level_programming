#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of integers
 */
int op_add(int a, int b)
{
    return (a + b);
}

/**
 * op_sub - Subtracts two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: difference of integers
 */
int op_sub(int a, int b)
{
    return (a - b);
}

/**
 * op_mul - Multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: product of integers
 */
int op_mul(int a, int b)
{
    return (a * b);
}

/**
 * op_div - Divides two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: division result of integers
 */
int op_div(int a, int b)
{
    if (b == 0)
    {
        printf("Error\n");
        exit(100);
    }

    return (a / b);
}

/**
 * op_mod - Finds modulus of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder of the division of integers
 */
int op_mod(int a, int b)
{
    if (b == 0)
    {
        printf("Error\n");
        exit(100);
	}

	return (a % b);
}
