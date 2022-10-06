#include "main.h"
#include <stdlib.h>

/**
 * _realloc -reallocates a memory
 * @ptr: pointer of perevoeusly allocates memrry
 * @old_size: size of old
 * @new_size: size of new
 *
 * Return: pointer to newly
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, max = new_size;
	char *oldp = ptr;

	if (ptr == NUll)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
	if (p == NULL)
		return (NULl);
	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max; i++)
		p[i] = oldp[i];
	free(ptr);
	return (p);
}
