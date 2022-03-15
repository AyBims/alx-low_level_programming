#include "main.h"
/**
 *main - Entry point
 *_islower file checks for lower case letters
 *return: always 0 (Success)
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
