#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints the numbers from 1 to 100, replacing multiples of 3 with
 * "Fizz", multiples of 5 with "Buzz", and multiples of both with "FizzBuzz"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0) /* if multiple of 3 and 5 */
			printf("FizzBuzz ");
		else if (i % 3 == 0) /* if multiple of 3 */
			printf("Fizz ");
		else if (i % 5 == 0) /* if multiple of 5 */
			printf("Buzz ");
		else /* if not a multiple of 3 or 5 */
			printf("%d ", i);
	}

	printf("\n"); /* print newline after loop completes */

	return (0);
}

