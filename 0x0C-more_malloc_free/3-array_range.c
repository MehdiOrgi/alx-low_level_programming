#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 * @min: The minimum value to include in the array.
 * @max: The maximum value to include in the array.
 *
 * Return: Pointer to the newly created array.
 */
int *array_range(int min, int max)
{
    int *arr, i;

    if (min > max)
        return (NULL);

    arr = malloc(sizeof(int) * (max - min + 1));

    if (arr == NULL)
        return (NULL);

    for (i = 0; i <= (max - min); i++)
        arr[i] = min + i;

    return (arr);
}

