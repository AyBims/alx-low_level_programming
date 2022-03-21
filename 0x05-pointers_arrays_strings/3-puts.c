#include <main.h>
/**
 * _puts - prints out the output of a string
 * @str: string input
 * Return: no output
 */

void _puts(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[count]);
		count++;
	}
}
