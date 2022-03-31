#include "main.h"

/**
 * _pow_recursion - raises a number to the power of another number recursively
 * @x: value/number
 * @y: power the number is being raised to
 * Return: returns new value of x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
		return (x * _pow_recursion(x, y - 1));
}
