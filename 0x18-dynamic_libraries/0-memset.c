#include "main.h"

/**
 * _memset - fills memeory area with a constant memory byte
 * @s: pointer
 * @b: constant byte
 * @n: memory area
 * Return: pointer s to main
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
