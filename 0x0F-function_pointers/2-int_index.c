#include "function_pointers.h"

/**
  * int_index - searches for an integer in an array of integers
  * @array: pointer to the array of integers
  * @size: size of the array
  * @cmp: pointer to the function to be used to compare values
  *
  * Return: the index of the first element for which the cmp function does not return 0
  *         -1 if no element matches or if size <= 0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
        int i = 0;

        if (size > 0)
        {
                if (array != NULL && cmp != NULL)
                {
                        while (i < size)
                        {
                                if (cmp(array[i]))
                                        return (i);

                                i++;
                        }
                }
        }

        return (-1);
}

