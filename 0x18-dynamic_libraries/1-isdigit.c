#include <stdio.h>
#include "main.h"
/**
 * _isdigit - checks for digit
 * @c: stores a numbers
 * Return: Always 1 if digit
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}

