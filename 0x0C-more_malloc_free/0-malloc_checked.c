#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - is a function that allocates memory using malloc
 * @b: is the number of bytes to be allocated
 * Return: pointer to the Allocated memory space
 */

void *malloc_checked(unsigned int b)
{
	void *b;

	b = malloc(b);
	if (b == NULL)
		exit(98);
	return (b);
}
