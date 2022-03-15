#include "main.h"
/**
 *_isalpha - Entry point
 *@c: is an ascii character
 *_isalpha file checks for letters
 *Return: Always 1 if alphabet (Success)
 */
int _isalpha(int c)
{
if (c >= 'A' && c <= 'z')
return (1);
else
return (0);
}
