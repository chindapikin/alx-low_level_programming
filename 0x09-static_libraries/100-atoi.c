#include "main.h"
/**
 * _atoi - is a function
 * @s: pointer
 * Return: int.
 */

int _atoi(char *s)
{
	int z = 0;

	while (s[z] != '\0')
	{
		_putchar(s[z]);
		s++;
	}
	return (0);
}
