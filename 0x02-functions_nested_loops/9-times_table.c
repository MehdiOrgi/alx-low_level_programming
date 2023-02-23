#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0
 */
void times_table(void)
{
    int row, column, result;

    for (row = 0; row < 10; row++)
    {
        for (column = 0; column < 10; column++)
        {
            result = row * column;
            if (column == 0)
            {
                _putchar('0');
            }
            else if (result < 10)
            {
                _putchar(' ');
                _putchar(result + '0');
            }
            else
            {
                _putchar(result / 10 + '0');
                _putchar(result % 10 + '0');
            }
            if (column < 9)
            {
                _putchar(',');
                _putchar(' ');
            }
        }
        _putchar('\n');
    }
}
