#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * list_len - is a function that counts the elements of a list_t file
 * @h: is the string input
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
