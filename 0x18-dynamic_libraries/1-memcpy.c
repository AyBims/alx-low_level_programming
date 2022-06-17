#include "main.h"

/**
 * _memcpy - copies n bytes from one memory area to another
 * @dest: final memory destination
 * @src: initial memory destination
 * @n: specifies memory area to be copied
 * Return: returns a pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
return (dest);
}
