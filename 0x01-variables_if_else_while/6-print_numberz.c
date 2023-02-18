#include <stdio.h>

/**
 * main - main block
 * Description: Print all single digit numbers of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
        int num = 0;

        while (num < 10) // loop through numbers 0-9
        {
                putchar(num + '0'); // print the number as a character
                num++;
        }
        putchar('\n'); // print new line after all numbers are printed

        return (0);
}
