#include "main.h"

/**
 * get_endianness - is a function that checls the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int k = 1;

	if (*(char *)&k == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
