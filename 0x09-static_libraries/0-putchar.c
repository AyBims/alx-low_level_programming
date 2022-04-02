#include "main.h"
#include "unistd.h"

/**
 *  _putchar - writes character c to stdout
 *   @c: character to print
 *   Return: Always 1 (success), Always -1(on error and error number is reset)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
