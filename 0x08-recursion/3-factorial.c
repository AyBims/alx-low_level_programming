#inxlude "main.h"

/**
 * factorial - calculates the factorial of a number
 * @n: number provided
 * Return: -1 for negative and factorial for others
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
