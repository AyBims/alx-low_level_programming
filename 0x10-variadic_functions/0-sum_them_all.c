#include "main.h"
#include

/**
 * sum_them_all - Entry point
 *  @n: input
 *  Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0, i < n, i++)
		aum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
