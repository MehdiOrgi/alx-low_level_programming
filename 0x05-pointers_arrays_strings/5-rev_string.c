#include "main.h"

/**
 * rev_string - Reverses a string.
 *
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
int i = 0, j = 0;
char str[1024];

while (*(s + i))
{
*(str + i) = *(s + i);
i++;
}
i--;
while (i >= 0)
{
*(s + i) = *(str + j);
i--;
j++;
}
}
