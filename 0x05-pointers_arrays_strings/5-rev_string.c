#include "main.h"
/**
 * rev_string - prints out the output of a string in reverse
 * @s: string/character input
 * Return: no output
 */

void rev_string(char *s)
{
        int count = 0;

        while (count >= 0)
        {
		if (s[count] == '\0')
			break;
		count++;
		
		for (count--; count >= 0; coun_putchar(s[count]);
                _putchar('\n');
        }
}
