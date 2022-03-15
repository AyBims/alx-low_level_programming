#include "main.h"
/**
 *print_sign - function indicates whether number is positive or negative
 *@n: is a number
 *Return: Always dependent on values  (success)
 */
int print_sign(int n)
{
if (n > 1)
_putchar('+');
return (1);
else if (n == 0)
_putchar('0');
return (0);
else
_putchar('-');
return (-1);
}
