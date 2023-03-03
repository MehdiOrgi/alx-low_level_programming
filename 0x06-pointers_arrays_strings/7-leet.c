#include "main.h"

/**
 * leet - encodes a string to 1337
 * @str: the string to be encoded
 *
 * Return: the encoded string
 */
char *leet(char *str)
{
  char *ltrs = "aAeEoOtTlL";
  char *nums = "4433007711";
  int i, j;

  for (i = 0; str[i] != '\0'; i++)
  {
    for (j = 0; ltrs[j] != '\0'; j++)
    {
      if (str[i] == ltrs[j])
      {
        str[i] = nums[j];
        break;
      }
    }
  }

  return (str);
}
