#include "main.h"
/**
 *-islower - main Entry point
 *return: always 0 (Success)
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else 
return (0);
}
