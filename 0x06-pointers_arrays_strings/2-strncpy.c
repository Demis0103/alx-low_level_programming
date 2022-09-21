#include "main.h"

/**
 *_strncpy - changes all lowercase letters
 *@dest: string to be changed
 *@src: max number of byte copied
 *@n: max number of byte copied
 *Return: returns
 */

char *strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (i < n; i++)
		dest[i] = '\0';

	return (dest);
}
