#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 *
 * @str: The string to be printed.
 */
void puts2(char *str)
{
int len = 0, i;

while (str[len])
len++;

for (i = 0; i < len; i += 2)
_putchar(*(str + i));
_putchar('\n');
}
