#include "main.h"
/**
 *_islower - Entry point
 *@c: is an ascii character
 *_islower file checks for lower case letters
 *return: 1 if lower case
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
