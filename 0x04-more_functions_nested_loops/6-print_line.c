#include "main.h"
/**
 * print_line - prints a line on the terminal
 * @n: is a number
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
