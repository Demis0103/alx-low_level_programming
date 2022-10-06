#include "main.h"
#include <stdlib.h>

/**
 * _calloc - alloactes nenory
 * @nmemb: bummber of elements
 * @size: size in bytes
 *
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	return (NULL);

	p = malloc(nmemb * size);
	if (p == NUll)
	return (NULL);

	for (i = 0; i < nmemb * size; i++)
	p[i] = 0;

	return (p);
}
