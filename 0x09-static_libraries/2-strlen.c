#include "main.h"

/**
 * _strlen - calculates the length of a atring
 * @s: input string.
 * Return: Always the value of count.
 */
int _strlen(char *s)
{
	int count = 0;

	if (*(s + count) != '\0')

		count++;
	return (count);
}
