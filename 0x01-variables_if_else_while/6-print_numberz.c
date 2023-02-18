#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 *        followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
        int num;

        num = 0;
        while (num < 10) /* loop through numbers 0-9 */
        {
                putchar(num + '0'); /* print the number */
                num++;
        }
        putchar('\n');

        return (0);
}
