#include "main.h"

/**
 * get_endianness - Checks if the machine is little or big endian.
 * Return: 0 for big endian, 1 for little endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *byte = (char *)&num;

	/* If the first byte (lowest address) is 1, the machine is little endian */
	return (byte[0] ? 1 : 0);
}

